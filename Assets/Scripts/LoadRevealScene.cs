using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadRevealScene : MonoBehaviour
{
    // GameObject portal;

    void OnTriggerEnter2D(Collider2D other) {
        // portal = GameObject.FindGameObjectWithTag("Portal");
        // portal.GetComponent<Algorithm>().Start();
        SceneManager.LoadSceneAsync("Reveal", LoadSceneMode.Single);
    }
}
