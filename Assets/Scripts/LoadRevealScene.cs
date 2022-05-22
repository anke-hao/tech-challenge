using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadRevealScene : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other) {
        SceneManager.LoadScene("Reveal", LoadSceneMode.Single);
    }
}
