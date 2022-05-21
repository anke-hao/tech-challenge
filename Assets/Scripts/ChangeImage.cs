using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text.RegularExpressions;

public class ChangeImage : MonoBehaviour
{
    public Sprite off;
    public Sprite on;
    public Button button;
    public Button other1;
    public Button other2;
    public Button other3;
    public Button other4;
    public int whichButton {
        get { 
            string input = button.name;
            string result = Regex.Replace(input, @"[^\d]", "");
        
            return Int32.Parse(result);
        }
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
       
    }

    public void ChangeButtonImage() {
        if(button.image.sprite == off) {
            button.image.sprite = on;
            other1.image.sprite = off;
            other2.image.sprite = off;
            other3.image.sprite = off;
            other4.image.sprite = off;
        } else {
            button.image.sprite = off;
        }
    }
}
