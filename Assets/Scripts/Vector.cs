using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class Vector : MonoBehaviour
{
    // public Button current;
    // public GameObject[] buttons;
    public GameObject door;
    public int[] answers = new int[16];
    public AudioClip doorRevealed;
    public AudioClip doorDisappeared;
    GameObject phil;
    GameObject portal;
    bool revealed;
    // public int index;
    // public int answer;
    
    void Start() {
        revealed = false;
        portal = GameObject.FindGameObjectWithTag("Portal");
        print(portal);
        phil = GameObject.FindGameObjectWithTag("Player");
        for(int i = 0; i < answers.Length; i++) {
            answers[i] = -1;
        }
    }

    public void insertIntoVector(int index, int value) {
        
        answers[index] = value;

        if (!answers.Contains(-1) && revealed == false) {
            door.SetActive(true);
            revealed = true;
            phil.GetComponent<PhilController>().PlaySound(doorRevealed);
            phil.GetComponent<Algorithm>().Start();
            // Debug.Log("door opens");
        } else if (answers.Contains(-1) && revealed == true) {
            phil.GetComponent<PhilController>().PlaySound(doorDisappeared);
            door.SetActive(false);
            revealed = false;
           //  Debug.Log("door closes");

        }
    }
}
