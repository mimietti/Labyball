#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "AppDelegateListener.h"
#import "UnitySocial.h"

void UnitySendMessage(const char* obj, const char* method, const char* msg);

extern "C" void UnitySocialPauseEngine(bool paused);

static const char* s_eventListenerName = NULL;
static bool s_engineAutomaticallyPaused = false;

#pragma mark - UnityAppController methods

@interface UnitySocialAppController : UnityAppController

- (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation;
- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;
- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error;
- (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo;
- (void)application:(UIApplication*)application didRegisterUserNotificationSettings:(UIUserNotificationSettings*)notificationSettings;
// - (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions; USE THROUGH AppDelegateListener, causes gfx error at least on Unity 4.7

@end

@implementation UnitySocialAppController

- (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation
{
    [UnitySocial handleOpenURL:url sourceApplication:sourceApplication annotation:annotation];
    return YES;
}

- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
    [UnitySocial didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}

- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
    [UnitySocial didFailToRegisterForRemoteNotificationsWithError:error];
}

- (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo
{
    [UnitySocial didReceiveRemoteNotification:userInfo];
}

- (void)application:(UIApplication*)application didRegisterUserNotificationSettings:(UIUserNotificationSettings*)notificationSettings
{
    [UnitySocial didRegisterUserNotificationSettings:notificationSettings];
}

@end

IMPL_APP_CONTROLLER_SUBCLASS(UnitySocialAppController);

@interface UnitySocialNativeWrapper : NSObject<UnitySocialDelegate, AppDelegateListener>
+ (UnitySocialNativeWrapper*)sharedInstance;
@end

static UnitySocialNativeWrapper* unitySocialNativeWrapper = [UnitySocialNativeWrapper sharedInstance];

@implementation UnitySocialNativeWrapper

- (id)init
{
    self = [super init];

    if (self)
    {
        UnityRegisterAppDelegateListener(self);
    }

    return self;
}

#pragma mark - Singleton

+ (void)initialize
{
    if (unitySocialNativeWrapper == nil)
    {
        unitySocialNativeWrapper = [[UnitySocialNativeWrapper alloc] init];
    }
}

+ (UnitySocialNativeWrapper*)sharedInstance
{
    return unitySocialNativeWrapper;
}

#pragma mark - JSON helpers

+ (NSString*)jsonFromDictionary:(NSDictionary*)dictionary
{
    NSError* error = nil;
    NSData* jsonData = [NSJSONSerialization dataWithJSONObject:dictionary options:0 error:&error];
    if (error == nil)
    {
        return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    }
    return nil;
}

+ (NSDictionary*)dictionaryFromJson:(NSString*)json
{
    if (json != nil)
    {
        NSError* error = nil;
        NSData* jsonData = [json dataUsingEncoding:NSUTF8StringEncoding];

        id jsonParsedObj = [NSJSONSerialization JSONObjectWithData:jsonData options:0 error:&error];

        if (error == nil)
        {
            if ([jsonParsedObj isKindOfClass:[NSDictionary class]])
            {
                return (NSDictionary*)jsonParsedObj;
            }
        }
    }

    return nil;
}

+ (NSMutableArray*)mutableArrayFromJson:(NSString*)json
{
    if (json != nil)
    {
        NSError* error = nil;
        NSData* jsonData = [json dataUsingEncoding:NSUTF8StringEncoding];

        id jsonParsedObj = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingMutableContainers error:&error];

        if (error == nil)
        {
            if ([jsonParsedObj isKindOfClass:[NSMutableArray class]])
            {
                return (NSMutableArray*)jsonParsedObj;
            }
        }
    }

    return nil;
}

#pragma mark - UnitySocial delegate methods

- (void)unitySocialDidShow:(UIView*)view
{
    if (s_eventListenerName != NULL)
    {
        UnitySendMessage(s_eventListenerName, "UnitySocialDidShow", "");
    }
}

- (void)unitySocialDidHide:(UIView*)view
{
    if (s_eventListenerName != NULL)
    {
        UnitySendMessage(s_eventListenerName, "UnitySocialDidHide", "");
    }
}

- (void)unitySocialGameShouldPause
{
    if (!s_engineAutomaticallyPaused)
    {
        if (s_eventListenerName != NULL)
        {
            UnitySendMessage(s_eventListenerName, "UnitySocialGameShouldPause", "");
        }
    }
    else
    {
        UnitySocialPauseEngine(true); // We were already automatically paused, make sure we still are paused, behaviour changed in Unity 5.3.2.
    }
}

- (void)unitySocialGameShouldResume
{
    UnitySocialPauseEngine(false);

    if (s_eventListenerName != NULL)
    {
        UnitySendMessage(s_eventListenerName, "UnitySocialGameShouldResume", "");
    }
}

- (void)unitySocialRewardClaimed:(NSDictionary*)metadata
{
    if (s_eventListenerName != NULL)
    {
        NSString* jsonMetadata = [UnitySocialNativeWrapper jsonFromDictionary:metadata];
        UnitySendMessage(s_eventListenerName, "UnitySocialRewardClaimed", [jsonMetadata UTF8String]);
    }
}

- (void)unitySocialChallengeStarted:(NSDictionary*)challenge withMetadata:(NSDictionary*)metadata
{
    if (s_eventListenerName != NULL)
    {
        NSMutableDictionary* params = [NSMutableDictionary new];

        [params setValue:challenge forKey:@"challenge"];
        [params setValue:metadata forKey:@"metadata"];

        NSString* jsonParams = [UnitySocialNativeWrapper jsonFromDictionary:params];

        if (jsonParams != nil)
        {
            UnitySendMessage(s_eventListenerName, "UnitySocialChallengeStarted", [jsonParams UTF8String]);
        }
    }
}

- (void)unitySocialInitialized:(BOOL)isSupported
{
    if (s_eventListenerName != NULL)
    {
        NSMutableDictionary* params = [NSMutableDictionary new];

        [params setValue:[NSNumber numberWithBool:isSupported] forKey:@"isSupported"];

        NSString* jsonParams = [UnitySocialNativeWrapper jsonFromDictionary:params];

        if (jsonParams != nil)
        {
            UnitySendMessage(s_eventListenerName, "UnitySocialInitialized", [jsonParams UTF8String]);
        }
    }
}

#pragma mark - AppDelegateListener delegate methods

- (void)didFinishLaunching:(NSNotification*)notification
{
    [UnitySocial didFinishLaunchingWithOptions:notification.userInfo];
}

@end

#pragma mark - Helpers

static NSString* UnitySocialCreateNSString(const char* string)
{
    return (string != NULL) ? [NSString stringWithUTF8String:string] : [NSString stringWithUTF8String:""];
}

#pragma mark - Native call wrappers

extern "C" {
static bool s_Initialized = false;

void UnitySocialInitialize(const char* clientId, const char* eventListenerName)
{
    if (unitySocialNativeWrapper != nil && !s_Initialized)
    {
        s_eventListenerName = strdup(eventListenerName);

        [UnitySocial setDelegate:unitySocialNativeWrapper];
        [UnitySocial initializeWithClientId:UnitySocialCreateNSString(clientId)];

        UIViewController* viewController = UnityGetGLViewController();

        if (viewController != nil)
        {
            UIView* view = UnityGetGLViewController().view;

            if (view != nil)
            {
                [UnitySocial showOnView:view andModule:@"UnitySocialUI"];
            }
        }

        s_Initialized = true;
    }
}

void UnitySocialShowButton(float left, float top, float size)
{
    CGFloat scale = 1.0f;

    if ([[UIScreen mainScreen] respondsToSelector:@selector(nativeScale)] == YES)
    {
        scale = [[UIScreen mainScreen] nativeScale];
    }
    else if ([[UIScreen mainScreen] respondsToSelector:@selector(scale)] == YES)
    {
        scale = [[UIScreen mainScreen] scale];
    }

    NSMutableDictionary* buttonProperties = [NSMutableDictionary new];

    [buttonProperties setValue:[NSNumber numberWithInt:roundf(left / scale)] forKey:@"left"];
    [buttonProperties setValue:[NSNumber numberWithInt:roundf(top / scale)] forKey:@"top"];
    [buttonProperties setValue:[NSNumber numberWithInt:roundf(size / scale)] forKey:@"size"];

    [UnitySocial setButtonSnapPositions:[NSArray arrayWithObject:buttonProperties]];
}

void UnitySocialHideButton()
{
    [UnitySocial setButtonSnapPositions:[NSArray new]];
}

bool UnitySocialIsSupported()
{
    return [UnitySocial isSupported];
}

bool UnitySocialIsReady()
{
    return [UnitySocial isReady];
}

void UnitySocialStartSession()
{
    [UnitySocial startSession];
}

void UnitySocialEndSession(const char* data)
{
    [UnitySocial endSession:(data != NULL) ? [UnitySocialNativeWrapper dictionaryFromJson:UnitySocialCreateNSString(data)] : [NSDictionary new]];
}

void UnitySocialPauseEngine(bool paused)
{
    if (UnityIsPaused() != paused)
    {
        UnityPause(paused);
    }

    s_engineAutomaticallyPaused = paused;
}
}
