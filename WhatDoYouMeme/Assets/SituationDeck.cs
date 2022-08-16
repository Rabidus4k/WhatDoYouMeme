using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SituationDeck : MonoBehaviour
{
    public List<Card> SituationCards;
    public Transform SpawnPoint;
    public CardPlacer CardPlacer;
    
    private Card _spawnedCard;

    public void SpawnCard(int index)
    {
        _spawnedCard = Instantiate(SituationCards[index], SpawnPoint.position, Quaternion.Euler(90,0,0));
        CardPlacer.PlaceCard(_spawnedCard);
    }
}
