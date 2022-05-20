using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class ChangeImage : MonoBehaviour
{
    public Sprite off;
    public Sprite on;
    public Button button;
    public Button other1;
    public Button other2;
    public Button other3;
    public Button other4;
    // public string which_button { get { return button.name[button.name.Length - 1]; }}
    public double which_button { get { return Char.GetNumericValue(button.name[button.name.Length - 1]); }}

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
            // Debug.Log(button.name.GetType());
            Debug.Log(button.name[button.name.Length - 1].GetType());
            // Debug.Log(button.name[button.name.Length - 1]);
        } else {
            button.image.sprite = off;
        }
    }
}
