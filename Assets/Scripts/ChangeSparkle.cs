using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class ChangeSparkle : MonoBehaviour
{
    public Sprite off;
    public Sprite on;
    // public bool answered;
    Animator animator;
    // public Sprite unanswered;
    // public Sprite answered;
    // public SpriteRenderer sparkle;
    public Button button1;
    public Button button2;
    public Button button3;
    public Button button4;
    public Button button5;
    GameObject phil;

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        phil = GameObject.FindGameObjectWithTag("Player");
    }

    // Update is called once per frame
    void Update()
    {
        if(button1.image.sprite == on || button2.image.sprite == on || 
        button3.image.sprite == on || button4.image.sprite == on || button5.image.sprite == on) {
            animator.SetBool("answered", true);
            // Debug.Log("answered");
        } else {
            animator.SetBool("answered", false);
            // Debug.Log("unanswered");
            int index = (button1.GetComponent<ChangeImage>().whichButton - 1) / 5;
            phil.GetComponent<Vector>().insertIntoVector(index, -1);
        }
       
    }

}
