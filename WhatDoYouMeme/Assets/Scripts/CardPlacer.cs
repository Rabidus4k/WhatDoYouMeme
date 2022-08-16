using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardPlacer : MonoBehaviour
{
    public Transform PlacePoint;

    private Card _placedCard;
    private ZoomPlace _zoomPlace;

    private void Awake()
    {
        _zoomPlace = FindObjectOfType<ZoomPlace>();
    }
    public void PlaceCard(Card card)
    {
        _placedCard = card;
        LeanTween.move(_placedCard.gameObject, PlacePoint.position, 0.2f);
        LeanTween.rotate(_placedCard.gameObject, PlacePoint.transform.rotation.eulerAngles, 0.2f);
    }

    public void ZoomIn()
    {
        if (_placedCard != null)
        {
            LeanTween.move(_placedCard.gameObject, _zoomPlace.transform.position, 0.2f);
            LeanTween.rotate(_placedCard.gameObject, Camera.main.transform.rotation.eulerAngles + new Vector3(-90,0,0), 0.2f);
        }
    }
}
