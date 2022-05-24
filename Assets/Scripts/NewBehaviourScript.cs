using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    public Transform player;
    public Transform loc1;

    public void TeleLoc1() {
        Debug.Log("DID THIS");
        player.transform.position = loc1.transform.position;
    }
}
