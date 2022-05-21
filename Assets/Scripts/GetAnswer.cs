using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class GetAnswer : MonoBehaviour
{
    public Button current;
    public GameObject[] buttons;
    // public GameObject door;
    // public int[] answers = new int[16];
    // GameObject vec = GameObject.FindGameObjectWithTag("Vector");

    public int index;
    public int answer;
    
    void Start() {

        GameObject phil = GameObject.FindGameObjectWithTag("Player");
    }

    public void check() {
        
        buttons = GameObject.FindGameObjectsWithTag("Button");

        foreach (GameObject button in buttons) {
            if (button.name == current.name) {
                int result = button.GetComponent<ChangeImage>().whichButton;
                // answers[(result - 1) / 5] = ((result - 1) % 5) + 1;
                index = (result - 1) / 5;
                answer = ((result - 1) % 5) + 1;
                // Debug.Log(answers[(result - 1) / 5]);
            }
        }
        GameObject phil = GameObject.FindGameObjectWithTag("Player");
        phil.GetComponent<Vector>().insertIntoVector(index, answer);
        // vec.insertIntoVector(index, answer);
        // if (!answers.Contains(-1)) {
            // door.SetActive(true);
            // Debug.Log("door opens");
        // }
    }
}
