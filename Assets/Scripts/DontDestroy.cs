using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontDestroy : MonoBehaviour
{
    // public string tag;
    void Awake()
    {
        // GameObject object = GameObject.FindGameObjectWithTag("Player");
        // GameObject music = GameObject.FindGameObjectWithTag("Music");
        DontDestroyOnLoad(this.gameObject);
    }

}
