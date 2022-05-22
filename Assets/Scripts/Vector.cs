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
    // public int index;
    // public int answer;
    
    void Start() {
        for(int i = 0; i < answers.Length; i++) {
            answers[i] = -1;
        }
    }

    public void insertIntoVector(int index, int value) {
        
        answers[index] = value;

        if (!answers.Contains(-1)) {
            door.SetActive(true);
            Debug.Log("door opens");
        }
    }
}