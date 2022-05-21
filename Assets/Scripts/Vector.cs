using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class Vector : MonoBehaviour
{
    public Button current;
    public GameObject[] buttons;
    public GameObject door;
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
                // Debug.Log(answers[(result - 1) / 5]);
            }
        }
        for(int i = 0; i < answers.Length; i++) {
            Debug.Log(answers[i]);
        }
        if (!answers.Contains(-1)) {
            // door.SetActive(true);
            // Debug.Log("door opens");
        }
    }
}
