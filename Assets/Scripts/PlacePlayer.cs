using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacePlayer : MonoBehaviour
{
    public Vector3 startPos;
    public Vector3 startScale;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    void Awake()
    {
        GameObject player = GameObject.FindWithTag("Player");
        player.transform.position = startPos;
        player.transform.localScale = startScale;
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
