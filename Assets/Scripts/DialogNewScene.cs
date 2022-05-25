using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class DialogNewScene : MonoBehaviour
{
    public GameObject dialogBox;
    public TextMeshProUGUI resourcesText;
    public string resources;
    public TextMeshProUGUI careerText;
    public string career;
    public bool playerInRange;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(playerInRange) {
            if(!dialogBox.activeInHierarchy) {
                dialogBox.SetActive(true);
                resourcesText.text = resources;
                careerText.text = career;
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