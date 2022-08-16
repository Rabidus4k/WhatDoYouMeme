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

    [SerializeField] private LayerMask _cardLayerMask;
    [SerializeField] private LayerMask _cardPlaceLayerMask;
    [SerializeField] private float _waitTime;

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
        _startYPos = 5.5f; // Better to not hardcode that one but whatever
    }

    public void EndDrag()
    {
        StopAllCoroutines();
        if (AllowDrag)
        {
            Debug.Log("EndDrag");
            AllowDrag = false;

            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 20, _cardPlaceLayerMask))
            {
                if (hit.collider.gameObject.TryGetComponent(out CardPlacer cardPlacer))
                {
                    cardPlacer.PlaceCard(_thisCard);
                }
            }
            else
            {
                _cardDeckInterface.AddCard(_thisCard);
                Destroy(gameObject);
            }
            _cardDeckInterface.AllowSwipe = true;
        }
    }

    public void InvokeDrag()
    {
        if (!AllowDrag)
            return;
        if (_rigidbody.isKinematic)
            return;

        Vector3 newWorldPosition = new Vector3(_board.CurrentMousePosition.x, _startYPos, _board.CurrentMousePosition.z);
        var difference = newWorldPosition - transform.position;

        var speed = 10 * difference;
        _rigidbody.velocity = speed;
        _rigidbody.rotation = Quaternion.Euler(new Vector3(speed.z, speed.x, 0));
    }

    public void BeginDrag()
    {
        StartCoroutine(WaitSomeTime());
    }

    private IEnumerator WaitSomeTime()
    {
        yield return new WaitForSeconds(_waitTime);
        if (!_cardDeckInterface.IsSwiping)
            yield return null;

        Debug.Log("begin");
        _cardDeckInterface.cards.Remove(_thisCard);
        _cardDeckInterface.AllowSwipe = false;
        AllowDrag = true;
    }
}