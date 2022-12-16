using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class GetAnswer : MonoBehaviour
{
    public Button current;
    public GameObject[] buttons;
    public Sprite on;
    public Sprite off;
    public int index;
    public int answer;
    GameObject phil;
    
    void Start() {

        phil = GameObject.FindGameObjectWithTag("Player");
    }

    public void check() {
        
        buttons = GameObject.FindGameObjectsWithTag("Button");
        foreach (GameObject button in buttons) {
            if (button.name == current.name) {
                
                    int result = button.GetComponent<ChangeImage>().whichButton;
                    index = (result - 1) / 5;
                    answer = ((result - 1) % 5) + 1;
            }
        }
        phil.GetComponent<Vector>().insertIntoVector(index, answer);
    }
}
