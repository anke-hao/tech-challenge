using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadRevealScene : MonoBehaviour
{
    GameObject phil;
    void OnTriggerEnter2D(Collider2D other) {
        phil = GameObject.FindGameObjectWithTag("Player");
        phil.GetComponent<PhilController>().speed = 0.5f;
        SceneManager.LoadSceneAsync("Reveal", LoadSceneMode.Single);
    }
}
