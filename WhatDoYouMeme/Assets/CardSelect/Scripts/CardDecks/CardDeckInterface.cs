using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/*
 * Interface for card deck
 */
[DisallowMultipleComponent]
public abstract class CardDeckInterface : MonoBehaviour {

	public enum SORTING_MODE
	{
		ASCENDING,
		DESCENDING
	}

	const float CAMERA_TO_CARD_DISTANCE = 2.0f;

	// Hover time before tooltip shown
	[Tooltip("How the card is sorted")]
	public SORTING_MODE sortingMode = SORTING_MODE.DESCENDING;

	// Hover time before tooltip shown
	[Tooltip("Hover time before tooltip shown")]
	public float tooltipTriggerTime = 2.0f;

	// Spacing between cards
	[Tooltip("Spacing between cards")]
	public float cardSpacing = 1.0f;

	// Intro duration in Seconds
	[Tooltip("Duration of intro animation")]
	[SerializeField]
	private float introDuration = 1.0f;

	// Card move speed
	[Tooltip("Card move speed")]
	public float cardMoveSpeed = 1.0f;

	// Starting Index
	private int startingIndex = 0;

	// cards holder for inspector
	[Tooltip("Put your cards here")]
	[SerializeField]
	private List<Card> _cards;

	// real variable used
	[SerializeField]
	public List<Card> cards;

	[SerializeField]
	private LayerMask _cardLayerMask;
	// set wether the carddeck is a continous one
	protected bool loop = false;

	// cardDeck X Size, calculated from card counts & card spacing
	protected float sizeX;

	// internal valiable, Curve offset 
	protected float offsett;

	// current card / selected card index
	protected int index;


	/*
     * Internal variable for detecting swipe
     */
	public bool IsSwiping;
	private Vector3 touchBeginPoint;
	private float startingOffsett;


	/*
     * Internal variable for showing tooltip
     */
	private float tooltipDetectTimer;

	[HideInInspector]
	public bool AllowSwipe = true;
    public UnityEngine.Events.UnityAction<int> OnCardSelected;
	/*
     * ======================================================================
     * Abstract Methods, MUST BE IMPLEMENTED
     * ======================================================================
     */
	// init() called after start() function
	protected abstract void Init();

	// function describing how cards are arranged 
	protected abstract void ReArrangeCards();
	/*
     * ======================================================================
     */

	private bool isAnimating;

	/*
     * Unity Start function
     */ 
	private void Start()
	{
		cards = new List<Card>(_cards.Count);
        
        // calculating deck size
        sizeX = (_cards.Count) * cardSpacing;
		index = 0; offsett = 0.0f;
		startingIndex = _cards.Count / 2;

		Init();
		isAnimating = false;
        IsSwiping = false;

		StartCoroutine(IntroAnimation());
	}

	/*
     * Main Update function
     */ 
	private void Update()
	{
		ReArrangeCards();

		ListenInput();

		if (!IsSwiping)
			IndexUpdate();
	}



	/*
     * CardDeck intro animation, add card one by one
     */
	private IEnumerator IntroAnimation()
	{
		isAnimating = true;

		for (int i = 0; i < _cards.Count; i++)
		{
			if (sortingMode == SORTING_MODE.DESCENDING)
                AddCard(_cards[i]);
            else
                AddCard(_cards[(_cards.Count - 1) - i]);

            yield return new WaitForSeconds(introDuration / _cards.Count);
        }

		index = startingIndex;
		isAnimating = false;
	}


    DraggableObject draggableObject = null;
    /*
     * Listen to touch swipe or mouse drage
     */
    private void ListenInput()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            Ray ray = Camera.main.ScreenPointToRay(touch.position);
            RaycastHit hit;

            if (touch.phase == TouchPhase.Began)
            {
                if (AllowSwipe)
                {
                    if (Physics.Raycast(ray, out hit, 20, _cardLayerMask))
                        hit.collider.gameObject.TryGetComponent(out draggableObject);

                    touchBeginPoint = Camera.main.ScreenToWorldPoint(new Vector3(touch.position.x, touch.position.y, CAMERA_TO_CARD_DISTANCE));
                    startingOffsett = offsett * cardSpacing;

                }
                if (draggableObject != null)
                {
                    draggableObject.BeginDrag();
                }
            }

            if (touch.phase == TouchPhase.Moved)
            {
                if (AllowSwipe)
                {
                    Vector2 currentTouchPoint = Camera.main.ScreenToWorldPoint(new Vector3(touch.position.x, touch.position.y, CAMERA_TO_CARD_DISTANCE));
                    offsett = (startingOffsett + (currentTouchPoint.x - touchBeginPoint.x)) / cardSpacing;

                    if (!loop)
                    {
                        if (offsett > (_cards.Count - 1)) offsett = _cards.Count - 1;
                        if (offsett < 0) offsett = 0;
                    }

                    IsSwiping = true;
                    index = (int)Mathf.Round(offsett);
                }
            
                if (draggableObject != null)
                {
                    draggableObject.InvokeDrag();
                }
            }

            if (touch.phase == TouchPhase.Ended)
            {
                if (AllowSwipe)
                {
                    if (!IsSwiping)
                    {
                        if (Physics.Raycast(ray, out hit, 20, _cardLayerMask))
                        {
                            Debug.Log("Ray to card");
                            Debug.DrawLine(ray.origin, ray.origin + ray.direction * 100, Color.red);
                            if (hit.collider.gameObject.TryGetComponent(out Card card))
                                SetCurrentIndex(card.id);
                        }
                    }

                    IsSwiping = false;
                }

                if (draggableObject != null)
                {
                    draggableObject.EndDrag();
                    draggableObject = null;
                }
            }
        }
        else
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
 
            if (Input.GetMouseButtonDown(0))
            {
                if (AllowSwipe)
                {
                    if (Physics.Raycast(ray, out hit, 20, _cardLayerMask))
                        hit.collider.gameObject.TryGetComponent(out draggableObject);

                    touchBeginPoint = Camera.main.ScreenToWorldPoint(
                        new Vector3(Input.mousePosition.x, Input.mousePosition.y, CAMERA_TO_CARD_DISTANCE));
                    startingOffsett = offsett * cardSpacing;
                }

                if (draggableObject != null)
                {
                    draggableObject.BeginDrag();
                }
            }

            if (Input.GetMouseButton(0))
            {
                if (AllowSwipe)
                {
                    Vector3 currentTouchPoint = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, CAMERA_TO_CARD_DISTANCE));

                    if ((currentTouchPoint - touchBeginPoint).sqrMagnitude > 0.01f)
                    {
                        offsett = (startingOffsett + (currentTouchPoint.x - touchBeginPoint.x)) / cardSpacing;

                        if (!loop)
                        {
                            if (offsett > (_cards.Count - 1)) offsett = _cards.Count - 1;
                            if (offsett < 0) offsett = 0;
                        }

                        IsSwiping = true;

                        index = (int)Mathf.Round(offsett);
                    }
                }

                if (draggableObject != null)
                {
                    Debug.Log("In");
                    draggableObject.InvokeDrag();
                }
            }

            if (Input.GetMouseButtonUp(0))
            {
                if (AllowSwipe)
                {
                    if (!IsSwiping)
                    {
                        if (Physics.Raycast(ray, out hit, 20, _cardLayerMask))
                        {
                            if (hit.collider.gameObject.TryGetComponent(out Card card))
                            {
                                SetCurrentIndex(card.id);
                                Debug.Log(card.id);
                            }
                        }
                    }
                    IsSwiping = false;
                }

                if (draggableObject != null)
                {
                    draggableObject.EndDrag();
                    draggableObject = null;
                }
            }
        }

        if (index < 0) index += _cards.Count;
        if (index > _cards.Count - 1) index -= _cards.Count;
        index %= _cards.Count;
    }



    /*
     * Listening to index change and interpolate the offsett to match the index
     * This code called every frame in Update function
     * Make this functon virtual, so every class can use their own interpolation 
     */
    protected virtual void IndexUpdate()
	{

		if (index < 0) index = 0;
		if (index > cards.Count - 1) index = cards.Count - 1;

		float target = 0;
        target = index;
		
		if (offsett != target)
		{
			if (offsett < target)
			{
				offsett = Mathf.Lerp(offsett, target, 0.1f * cardMoveSpeed);

                if (target - offsett < 0.01f)
                {
                    offsett = target;
                    if (OnCardSelected != null)
                        OnCardSelected(index);
                }
			}

			if (offsett > target)
			{
				offsett = Mathf.Lerp(offsett, target, 0.1f * cardMoveSpeed);

                if (offsett - target < 0.01f)
                {
                    offsett = target;
                    if (OnCardSelected != null)
                        OnCardSelected(index);
                }
			}
		}
		else
		{
			offsett = target;
		}
	}

	/*
     * Move cards from inspector to internal List cards
     * we can do this with animations
     * note : we still want to handle null valued card in inspector
     *        assuming that is a space
     */ 
	public void AddCard(Card inspectorCard)
	{
		Card card = null;

        if (inspectorCard != null)
        {
            card = Card.Instantiate<Card>(inspectorCard);
            card.transform.SetParent(transform, true);
            card.transform.position = Vector3.one * 999999;
			card.transform.rotation = Quaternion.Euler(new Vector3(-90, 180, 0));
            card.id = cards.Count;

        }

		cards.Add(card);
        
        index = cards.Count - 1;
		
	}

	// Current / selected card index
	public int GetCurrentIndex()
	{
        if (sortingMode == SORTING_MODE.ASCENDING)
            return (_cards.Count - 1) - index;
        else
            return index;
	}

	// Set selected card index
	public void SetCurrentIndex(int value)
	{
        if (sortingMode == SORTING_MODE.ASCENDING)
            value = (_cards.Count - 1) - value;

        if (loop)
        {
            if (value < 0)
                value = _cards.Count - 1;

            if (value > _cards.Count - 1)
                value = 0;
        }
        
        if(value >= 0 && value < _cards.Count) 
			    index = value;
	}

	// get card size / count
	public int Size()
	{
		return _cards.Count;
	}

	// get card based on id
	public Card GetCard(int id)
	{
		if (!isAnimating)
		{
			if (id > 0 && id < _cards.Count)
				return _cards[id];
		}

		return null;
	}

	// get current card,
	public Card GetCurrentCard()
	{
        if (!isAnimating)
            return _cards[GetCurrentIndex()];
        	
		return null;
	}
}
