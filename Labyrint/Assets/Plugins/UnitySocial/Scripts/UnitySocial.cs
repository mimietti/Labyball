#if UNITY_SOCIAL

#if UNITY_IOS && !UNITY_EDITOR
#define UNITY_SOCIAL_SUPPORTED
#endif

using UnityEngine;
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

/// <summary>
/// Unity Social public API
/// </summary>
public class UnitySocial : MonoBehaviour
{
    #if UNITY_SOCIAL_SUPPORTED
    private static UnitySocial s_UnitySocialInstance = null;
    private static bool s_AppIsClosing = false;
    #endif

    private static UnitySocial UnitySocialInstance
    {
        get
        {
            #if UNITY_SOCIAL_SUPPORTED
            if (s_UnitySocialInstance == null && !s_AppIsClosing)
            {
                UnitySocialSettings settings = (UnitySocialSettings) Resources.Load("UnitySocialSettings");

                if (settings != null)
                {
                    if (settings.IsEnabled)
                    {
                        GameObject gameObject = new GameObject("UnitySocial");

                        if (gameObject != null)
                        {
                            gameObject.name = gameObject.name + gameObject.GetInstanceID();
                            s_UnitySocialInstance = gameObject.AddComponent<UnitySocial>();

                            if (s_UnitySocialInstance != null)
                            {
                                UnitySocialInitialize(settings.clientId, s_UnitySocialInstance.name);
                            }

                            DontDestroyOnLoad(gameObject);
                        }
                    }
                }
            }

            return s_UnitySocialInstance;
            #else
            return null;
            #endif
        }
    }

    private static bool s_UnityPauseEngineAutomatically = true;

    // Public API

    /// <summary>
    /// Occurs when Unity Social button is shown
    /// </summary>
    public static event Action DidShow;

    /// <summary>
    /// Occurs when Unity Social button is hidden
    /// </summary>
    public static event Action DidHide;

    /// <summary>
    /// Occurs when Unity Social view is opened
    /// </summary>
    public static event Action GameShouldPause;

    /// <summary>
    /// Occurs when Unity Social view is hidden
    /// </summary>
    public static event Action GameShouldResume;

    /// <summary>
    /// Occurs when Unity Social is initialized
    /// </summary>
    public static event Action<bool> Initialized;

    /// <summary>
    /// Occurs when the user has earned a reward
    /// </summary>
    public static event Action<Dictionary<string, object>> RewardClaimed;

    /// <summary>
    /// Occurs when a new challenge should start
    /// </summary>
    public static event Action<Dictionary<string, object>, Dictionary<string, object>> ChallengeStarted;

    /// <summary>
    /// Initializes Unity Social
    /// </summary>
    public static void Initialize()
    {
        // If s_UnitySocialInstance is not yet initialized, calling UnitySocialInstance property getter will trigger the initialization
        if (UnitySocialInstance == null)
        {
            Debug.Log("Unable to initialize Unity Social. Unity Social is not enabled or available for this platform.");
        }
    }

    /// <summary>
    /// Gets or sets a boolean that determines if Unity player should be paused automatically when Unity Social view is opened
    /// </summary>
    public static bool pauseEngineAutomatically
    {
        get
        {
            return s_UnityPauseEngineAutomatically;
        }
        set
        {
            s_UnityPauseEngineAutomatically = value;
        }
    }

    /// <summary>
    /// Is Unity Social supported on this device
    /// </summary>
    public static bool isSupported
    {
        get
        {
            #if UNITY_SOCIAL_SUPPORTED
            return UnitySocialIsSupported();
            #endif
            return false;
        }
    }

    /// <summary>
    /// Is Unity Social initialized and ready to be used
    /// </summary>
    public static bool isReady
    {
        get
        {
            #if UNITY_SOCIAL_SUPPORTED
            if (UnitySocialInstance != null)
            {
                return UnitySocialIsReady();
            }
            #endif
            return false;
        }
    }

    /// <summary>
    /// Starts a new Unity Social session
    /// </summary>
    public static void StartSession()
    {
        #if UNITY_SOCIAL_SUPPORTED
        if (UnitySocialInstance != null)
        {
            UnitySocialStartSession();
        }
        #endif
    }

    /// <summary>
    /// End the current Unity Social session
    /// </summary>
    /// <param name="data">A dictionary containing the session related metadata, e.g. score</param>
    public static void EndSession(Dictionary<string, object> data)
    {
        #if UNITY_SOCIAL_SUPPORTED
        if (UnitySocialInstance != null)
        {
            UnitySocialEndSession((data != null) ? UnitySocialTools.Json.Serialize(data) : null);
        }
        #endif
    }

    /// <summary>
    /// Horizontal aligment of the Unity Social button
    /// </summary>
    public enum ButtonSide { Left = 0, Right };

    /// <summary>
    /// Show Unity Social button
    /// </summary>
    /// <param name="side">Defines if button should be positioned on left or right side of the screen</param>
    /// <param name="top">Defines the button distance from the top of the screen in pixels</param>
    /// <param name="size">Defines the size of the button in pixels</param>
    public static void ShowButton(ButtonSide side, float top, float size)
    {
        #if UNITY_SOCIAL_SUPPORTED
        if (UnitySocialInstance != null)
        {
            UnitySocialShowButton(((int) side) > 0 ? Screen.width : 0, top, size);
        }
        #endif
    }

    /// <summary>
    /// Hide Unity Social button
    /// </summary>
    public static void HideButton()
    {
        #if UNITY_SOCIAL_SUPPORTED
        if (UnitySocialInstance != null)
        {
            UnitySocialHideButton();
        }
        #endif
    }

    // MonoBehaviour methods

    void OnApplicationQuit()
    {
        #if UNITY_SOCIAL_SUPPORTED
        s_UnitySocialInstance = null;
        s_AppIsClosing = true;
        #endif

        DidShow = null;
        DidHide = null;

        Initialized = null;

        GameShouldPause = null;
        GameShouldResume = null;

        RewardClaimed = null;
        ChallengeStarted = null;
    }

    // From native

    private void UnitySocialDidShow()
    {
        if (DidShow != null)
        {
            DidShow();
        }
    }

    private void UnitySocialDidHide()
    {
        if (DidHide != null)
        {
            DidHide();
        }
    }

    private void UnitySocialGameShouldPause()
    {
        if (GameShouldPause != null)
        {
            GameShouldPause();
        }

        #if UNITY_SOCIAL_SUPPORTED
        if (s_UnityPauseEngineAutomatically)
        {
            UnitySocialPauseEngine(true);
        }
        #endif
    }

    private void UnitySocialGameShouldResume()
    {
        if (GameShouldResume != null)
        {
            GameShouldResume();
        }
    }

    private void UnitySocialInitialized(string result)
    {
        if (Initialized != null && result != null && result.Length > 0)
        {
            Dictionary<string, object> dict = UnitySocialTools.DictionaryExtensions.JsonToDictionary(result);
            bool isSupported;

            if (UnitySocialTools.DictionaryExtensions.TryGetValue(dict, "isSupported", out isSupported))
            {
                Initialized(isSupported);
            }
        }
    }

    private void UnitySocialRewardClaimed(string metadata)
    {
        if (RewardClaimed != null && metadata != null && metadata.Length > 0)
        {
            Dictionary<string, object> metadataDictionary = UnitySocialTools.DictionaryExtensions.JsonToDictionary(metadata);
            RewardClaimed(metadataDictionary);
        }
    }

    private void UnitySocialChallengeStarted(string challengeAndMetadata)
    {
        if (ChallengeStarted != null && challengeAndMetadata != null && challengeAndMetadata.Length > 0)
        {
            Dictionary<string, object> dictionary = UnitySocialTools.DictionaryExtensions.JsonToDictionary(challengeAndMetadata);
            if (dictionary != null && dictionary.ContainsKey("challenge") && dictionary.ContainsKey("metadata"))
            {
                Dictionary<string, object> challengeDictionary = dictionary["challenge"] as Dictionary<string, object>;
                Dictionary<string, object> metadataDictionary = dictionary["metadata"] as Dictionary<string, object>;

                if (challengeDictionary != null && metadataDictionary != null)
                {
                    ChallengeStarted(challengeDictionary, metadataDictionary);
                }
            }
        }
    }

    // To native

    #if UNITY_SOCIAL_SUPPORTED
    [DllImport("__Internal")]
    private static extern void UnitySocialInitialize(string clientId, string eventListenerName);

    [DllImport("__Internal")]
    private static extern void UnitySocialStartSession();

    [DllImport("__Internal")]
    private static extern bool UnitySocialIsSupported();

    [DllImport("__Internal")]
    private static extern bool UnitySocialIsReady();

    [DllImport("__Internal")]
    private static extern void UnitySocialEndSession(string data);

    [DllImport("__Internal")]
    private static extern void UnitySocialPauseEngine(bool pause);

    [DllImport("__Internal")]
    private static extern void UnitySocialShowButton(float left, float top, float size);

    [DllImport("__Internal")]
    private static extern void UnitySocialHideButton();
    #endif
}

#endif
