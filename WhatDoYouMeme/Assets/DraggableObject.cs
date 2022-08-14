using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DraggableObject : MonoBehaviour
{
    private float _startYPos;
    private Rigidbody _rigidbody;
    private BoardController _board;

    void Start()
    {
        _board = FindObjectOfType<BoardController>();
        _rigidbody = GetComponent<Rigidbody>();

        _startYPos = 0; // Better to not hardcode that one but whatever
    }

    private void OnMouseDrag()
    {
        Vector3 newWorldPosition = new Vector3(_board.CurrentMousePosition.x, _startYPos + 1, _board.CurrentMousePosition.z);

        var difference = newWorldPosition - transform.position;

        var speed = 10 * difference;
        _rigidbody.velocity = speed;
        _rigidbody.rotation = Quaternion.Euler(new Vector3(-speed.x, -90, -speed.z));
    }
}