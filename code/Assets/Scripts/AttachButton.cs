using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// Attach to UI Button, child of each sparkle
public class AttachButton : MonoBehaviour
{
    public Transform follow;
    private int height;
    private Camera mainCamera;
    
    void Start() {
        mainCamera = Camera.main;
        height = Screen.height / 15;
    }

    void Update() {
        var screenPos = mainCamera.WorldToScreenPoint(follow.position);
        Vector3 vec = new Vector3(0, height, 0);
        transform.position = screenPos + vec;
    }
}
