using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DialogNewScene : MonoBehaviour
{
    public GameObject dialogBox;
    public string resourcesText1;
    public string resourcesText2;
    public string resourcesText3;
    public string resourcesText4;
    public string resourcesText5;
    public TextMeshProUGUI link;
    public string careerText1;
    public string careerText2;
    public string careerText3;
    public string careerText4;
    public string careerText5;
    public TextMeshProUGUI career;
    GameObject phil;
    public bool playerInRange;
    public AudioClip reveal;
    int result;

    // Start is called before the first frame update
    void Start()
    {
        phil = GameObject.FindGameObjectWithTag("Player");
        result = phil.GetComponent<Algorithm>().getKNN();
    }

    // Update is called once per frame
    void Update()
    {
        if(playerInRange) {
            if(!dialogBox.activeInHierarchy) {
                dialogBox.SetActive(true);
                phil.GetComponent<PhilController>().PlaySound(reveal);
                if(result == 1) {
                    link.text = resourcesText1;
                    career.text = careerText1;
                } else if (result == 2) {
                    link.text = resourcesText2;
                    career.text = careerText2;

                } else if (result == 3) {
                    link.text = resourcesText3;
                    career.text = careerText3;

                } else if (result == 4) {
                    link.text = resourcesText4;
                    career.text = careerText4;
                    
                } else if (result == 5) {
                    link.text = resourcesText5;
                    career.text = careerText5;

                } else {
                    print("ERROR: no match");
                }
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D other) {
        if(other.CompareTag("Player")) {
            playerInRange = true;
        }
    }

    private void OnTriggerExit2D(Collider2D other) {
        if(other.CompareTag("Player")) {
            playerInRange = false;
            dialogBox.SetActive(false);
        }
    }
}