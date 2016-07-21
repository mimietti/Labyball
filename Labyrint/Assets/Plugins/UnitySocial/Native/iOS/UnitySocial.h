#import <UIKit/UIKit.h>


@protocol UnitySocialDelegate<NSObject>

@optional
- (void)unitySocialDidShow:(UIView*)view;
- (void)unitySocialDidHide:(UIView*)view;
- (void)unitySocialGameShouldPause;
- (void)unitySocialGameShouldResume;
- (void)unitySocialRewardClaimed:(NSDictionary*)metadata;
- (void)unitySocialChallengeStarted:(NSDictionary*)challenge withMetadata:(NSDictionary*)metadata;
- (void)unitySocialSendMessage:(NSDictionary*)data toDestination:(NSString*)destination;
- (void)unitySocialInitialized:(BOOL)isSupported;
@end


@interface UnitySocial : NSObject

#pragma mark - Initialization
+ (id<UnitySocialDelegate>)delegate;
+ (void)setDelegate:(id<UnitySocialDelegate>)delegate;
+ (void)initializeWithClientId:(NSString*)clientId;
+ (void)showOnView:(UIView*)view;
+ (void)showOnView:(UIView*)view andModule:(NSString*)moduleName;

#pragma mark - Status
+ (BOOL)isSupported;
+ (BOOL)isReady;

#pragma mark - Look & Feel
+ (void)setButtonSnapPositions:(NSArray*)arr;

#pragma mark - Sharing
+ (void)enableShareDestination:(NSString*)destination;

#pragma mark - Session control
+ (void)startSession;
+ (void)endSession:(NSDictionary*)data;

#pragma mark - URL handling
+ (BOOL)handleOpenURL:(NSURL*)url sourceApplication:(id)sourceApplication annotation:(id)annotation;

#pragma mark - Push notifications
+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(NSError*)error;
+ (void)didReceiveRemoteNotification:(NSDictionary*)userInfo;
+ (void)didRegisterUserNotificationSettings:(UIUserNotificationSettings*)notificationSettings;
+ (BOOL)didFinishLaunchingWithOptions:(NSDictionary*)launchOptions;

@end
