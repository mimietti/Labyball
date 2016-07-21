using UnityEngine;
using System.Collections;
using UnityEngine.UI; 
using UnityEngine.SceneManagement; 
using System.Collections.Generic; 

public class LoadOnClick : MonoBehaviour {

	public static LoadOnClick instance; 

	void Awake()
	{
		GameState.CurrentLevel = 0;
		IntegrateSocial.UnitySocialShowButton (); 

		GameObject.Find ("LastResult").gameObject.GetComponent<Text> ().text = GameState.Time;
		IntegrateSocial.UnitySocialEndSession (new Dictionary<string, object> { 
			{ "playTime", GameState.playTime }
		});
	}
		
	void Start()
	{
		IntegrateSocial.Initialize ();
	}


	public void LoadScene (int level) 
	{


		SceneManager.LoadScene(level); 
	}
}
