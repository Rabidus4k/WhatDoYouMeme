using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardPlacer : MonoBehaviour
{
    public Transform PlacePoint;

    private Card _placedCard;

    public void PlaceCard(Card card)
    {
        _placedCard = card;
        LeanTween.move(_placedCard.gameObject, PlacePoint.position, 0.2f);
    }

    public void Zoom()
    {
        if (_placedCard != null)
    }
}
