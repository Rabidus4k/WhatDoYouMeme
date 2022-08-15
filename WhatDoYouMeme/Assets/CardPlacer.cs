using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardPlacer : MonoBehaviour
{
    public void PlaceCard(Card card)
    {
        card.transform.position = transform.position;
    }
}
