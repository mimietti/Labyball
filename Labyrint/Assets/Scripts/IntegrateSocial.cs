using UnityEngine;
using System.Collections;
using System.Collections.Generic; 
// using UnityEngine.SceneManagement; 

public static class IntegrateSocial  
{


	public static void Initialize () 
	{
		UnitySocial.Initialized += HandleInitialized;
		UnitySocial.DidHide += HandleDidHide;
		UnitySocial.DidShow += HandleDidShow;
		UnitySocial.GameShouldPause += HandleGameShouldPause;
		UnitySocial.GameShouldResume += HandleGameShouldResume;
		UnitySocial.RewardClaimed += HandleRewardClaimed;
		UnitySocial.ChallengeStarted += HandleChallengeStarted;
		UnitySocial.Initialize(); 
	}

	static void HandleInitialized(bool success)
	{
		Debug.Log("Unity Social Initialized, success: "+success);
	}
	static void HandleDidHide()
	{
		Debug.Log("Unity Social Hidden");
	}
	static void HandleDidShow()
	{
		Debug.Log("Unity Social Shown");
	}
	static void HandleGameShouldPause()
	{
		Debug.Log("Game will pause");
	}
	static void HandleGameShouldResume()
	{
		Debug.Log("Game will resume");
	}

	static void HandleRewardClaimed(Dictionary<string, object> metadata)
	{
		Debug.Log("Got reward(s)!");
		foreach(KeyValuePair<string,object> kvp in metadata)
		{
			Debug.Log("Reward: "+kvp.Key+" - "+kvp.Value+"!");
			//As an example, let's assume that you have given the following as an item name for a reward: ‘Prizes’
			if(kvp.Key == "Key")
			{
				Debug.Log("Player should be awarded " + System.Convert.ToInt32(kvp.Value) + "coins here!");
				//AddToPrizes(System.Convert.ToInt32(kvp.Value));
				GameState.Time = "infinite";
				GameState.UseGift (kvp.Key);
			}

		}
	}


	static void HandleChallengeStarted(Dictionary<string, object> challenge, Dictionary<string,object> metadata)
	{
		int challengeType = -1;
		string challengeStr = "";
		Debug.Log("Challenge starts");

		foreach(KeyValuePair<string,object> kvp in challenge)
		{
			Debug.Log("Challenge information: "+kvp.Key+ ", "+kvp.Value);
		}

		foreach(KeyValuePair<string,object> kvp in metadata)
		{
			//This metadata is provided by you when creating challenges
			Debug.Log("Challenge metadata: "+kvp.Key+ ", "+kvp.Value);


			if(kvp.Key == "challengeType")
				challengeType = System.Convert.ToInt32(kvp.Value);
			else if (kvp.Key == "challengeStr")
				challengeStr = System.Convert.ToString(kvp.Value);
		}

		if (challengeType != -1 && challengeStr != "") //Just to confirm that we got the information in properly
			//StartGame(challengeType, challengeStr); //You should replace the StartGame with your own function that starts up a game session.
		
			// modifications 

			// SceneManager.LoadScene (1); 

			GameState.StartChallenge (challengeType, challengeStr);

		else
			Debug.Log("Something went wrong, we didn't get all the data we needed!");
	}  

	public static void UnitySocialShowButton ()
	{
		#if UNITY_SOCIAL
		int buttonSize = 130;
		UnitySocial.ShowButton (UnitySocial.ButtonSide.Left, 12, buttonSize);
		#endif
	}

	public static void UnitySocialHideButton ()
	{
		#if UNITY_SOCIAL
		UnitySocial.HideButton ();
		#endif
	}

	public static void UnitySocialStartSession ()
	{
		#if UNITY_SOCIAL
		UnitySocial.StartSession ();
		#endif
	}

	public static void UnitySocialEndSession (Dictionary<string, object> challengeMetaData)
	{
		#if UNITY_SOCIAL
		UnitySocial.EndSession (challengeMetaData);
		Debug.Log("Parsed playTime = " + GameState.playTime);
		#endif
	}

}
