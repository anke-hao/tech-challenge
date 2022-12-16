using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloatComputer : MonoBehaviour
{
    public float speed;
    public float changeTime = 1.0f;
    Rigidbody2D rigidbody2D;
    float timer;
    int direction = 1;
    // Start is called before the first frame update
    void Start()
    {
        rigidbody2D = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        timer -= Time.deltaTime;

        if (timer < 0)
        {
            direction = -direction;
            timer = changeTime;
        }
    }
    void FixedUpdate ()
    {
        Vector2 position = rigidbody2D.position;
        position.y = position.y + Time.deltaTime * speed * direction;
        rigidbody2D.MovePosition(position);

    }
}
