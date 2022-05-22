using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class GetAnswer : MonoBehaviour
{
    public Button current;
    public GameObject[] buttons;
    // bool answered;
    // public GameObject door;
    // public int[] answers = new int[16];
    // GameObject vec = GameObject.FindGameObjectWithTag("Vector");
    public Sprite on;
    public Sprite off;
    public int index;
    public int answer;
    GameObject phil;
    
    void Start() {

        phil = GameObject.FindGameObjectWithTag("Player");
        // answer = -1;
    }

    public void check() {
        
        buttons = GameObject.FindGameObjectsWithTag("Button");
        // if(buttons[0].image.sprite == on || buttons[1].image.sprite == on || 
        //     buttons[2].image.sprite == on || buttons[3].image.sprite == on || 
        //     buttons[4].image.sprite == on) {

        foreach (GameObject button in buttons) {
            if (button.name == current.name) {
                
                    int result = button.GetComponent<ChangeImage>().whichButton;
                    // answers[(result - 1) / 5] = ((result - 1) % 5) + 1;
                    index = (result - 1) / 5;
                // if(button.GetComponent<Image>().GetComponent<Sprite>() == off) {
                    answer = ((result - 1) % 5) + 1;
                    // answered = true;
                    // Debug.Log(answers[(result - 1) / 5]);
                // } else {
                //     answer = -1;
                    // answered = false;
                // }
            }
        }
        // }
        // GameObject phil = GameObject.FindGameObjectWithTag("Player");
        phil.GetComponent<Vector>().insertIntoVector(index, answer);
        // vec.insertIntoVector(index, answer);
        // if (!answers.Contains(-1)) {
            // door.SetActive(true);
            // Debug.Log("door opens");
        // }
    }
}
