using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class Vector : MonoBehaviour
{
    public GameObject door;
    public int[] answers = new int[16];
    public AudioClip doorRevealed;
    public AudioClip doorDisappeared;
    GameObject phil;
    GameObject portal;
    GameObject instructions;
    bool revealed;
    
    void Start() {
        revealed = false;
        portal = GameObject.FindGameObjectWithTag("Portal");
        phil = GameObject.FindGameObjectWithTag("Player");
        instructions = GameObject.FindGameObjectWithTag("Instructions");
        for(int i = 0; i < answers.Length; i++) {
            answers[i] = -1;
        }
    }

    public void insertIntoVector(int index, int value) {
        
        answers[index] = value;
        if (!answers.Contains(-1)) {
            if(revealed == false) {
                door.SetActive(true);
                instructions.SetActive(false);
                revealed = true;
                phil.GetComponent<PhilController>().PlaySound(doorRevealed);
                
            }
        } else if (answers.Contains(-1) && revealed == true) {
            phil.GetComponent<PhilController>().PlaySound(doorDisappeared);
            door.SetActive(false);
            instructions.SetActive(true);
            revealed = false;
        }
    }
}
