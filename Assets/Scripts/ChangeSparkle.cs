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

    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        // animator = gameObject.GetComponent<Animator>();
        // Debug.Log(gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        if(button1.image.sprite == on || button2.image.sprite == on || 
        button3.image.sprite == on || button4.image.sprite == on || button5.image.sprite == on) {
            animator.SetBool("answered", true);
            // answered = true;
            Debug.Log("answered");
        } else {
            animator.SetBool("answered", false);
            // animator.SetTrigger("unanswered");
            // answered = false;
            Debug.Log("unanswered");
        }
       
    }

    public void ChangeSpriteImage() {
    }
}
