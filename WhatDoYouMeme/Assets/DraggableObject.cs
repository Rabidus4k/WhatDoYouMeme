using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DraggableObject : MonoBehaviour
{
    private float _startYPos;
    private Rigidbody _rigidbody;
    private BoardController _board;
    private CardDeckInterface _cardDeckInterface;
    private CardPlacer _cardPlacer;
    private Card _thisCard;

    [SerializeField]
    private float _waitTime;
    public bool AllowDrag
    {
        get => _allowDrag;
        set
        {
            _allowDrag = value;
            _rigidbody.isKinematic = !value;
        }
    }
    private bool _allowDrag;

    void Start()
    {
        _cardPlacer = FindObjectOfType<CardPlacer>();
        _cardDeckInterface = FindObjectOfType<CardDeckInterface>();
        _board = FindObjectOfType<BoardController>();
        _rigidbody = GetComponent<Rigidbody>();
        _thisCard = GetComponent<Card>();

        AllowDrag = false;
        _startYPos = 0; // Better to not hardcode that one but whatever
    }

    private void OnMouseDrag()
    {
        if (!AllowDrag)
            return;

        Vector3 newWorldPosition = new Vector3(_board.CurrentMousePosition.x, _startYPos + 1, _board.CurrentMousePosition.z);

        var difference = newWorldPosition - transform.position;

        var speed = 10 * difference;
        _rigidbody.velocity = speed;
        _rigidbody.rotation = Quaternion.Euler(new Vector3(speed.z + 90, speed.x, 0));
    }

    private void OnMouseDown()
    {
        StartCoroutine(WaitSomeTime());
    }

    private void OnMouseUp()
    {
        StopAllCoroutines();
        if (AllowDrag)
        {
            AllowDrag = false;
            
            _cardDeckInterface.AddCard(_thisCard);
            Destroy(gameObject);
            _cardDeckInterface.AllowSwipe = true;
        }
    }

    private IEnumerator WaitSomeTime()
    {
        yield return new WaitForSeconds(_waitTime);
        _cardDeckInterface.cards.Remove(_thisCard);
        _startYPos = transform.position.y;
        _cardDeckInterface.AllowSwipe = false;
        AllowDrag = true;
    }
}