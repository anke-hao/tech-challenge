using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacePlayer : MonoBehaviour
{
    public Vector3 startPos;
    public Vector3 startScale;
    void Awake()
    {
        GameObject player = GameObject.FindWithTag("Player");
        player.transform.position = startPos;
        player.transform.localScale = startScale;
    }
}
