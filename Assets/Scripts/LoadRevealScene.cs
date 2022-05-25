using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadRevealScene : MonoBehaviour
{
    // GameObject portal;
    GameObject phil;
    void OnTriggerEnter2D(Collider2D other) {
        // portal = GameObject.FindGameObjectWithTag("Portal");
        // portal.GetComponent<Algorithm>().Start();
        phil = GameObject.FindGameObjectWithTag("Player");
        phil.GetComponent<PhilController>().speed = 0.5f;
        SceneManager.LoadSceneAsync("Reveal", LoadSceneMode.Single);
    }
}
