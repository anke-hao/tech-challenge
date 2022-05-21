using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Vector : MonoBehaviour
{
    public Button current;
    public GameObject[] buttons;
    public int[] answers = new int[16];
    
    void Start() {
        for(int i = 0; i < answers.Length; i++) {
            answers[i] = -1;
        }
    }

    public void check() {
        
        buttons = GameObject.FindGameObjectsWithTag("Button");

        foreach (GameObject button in buttons) {
            if (button.name == current.name) {
                int result = button.GetComponent<ChangeImage>().whichButton;
                answers[(result - 1) / 5] = ((result - 1) % 5) + 1;
            }
        }
    }
}
