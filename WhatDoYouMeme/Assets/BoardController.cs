using UnityEngine;

public class BoardController : MonoBehaviour
{
    [HideInInspector] public Vector3 CurrentMousePosition;
    private Camera mainCamera;

    void Start()
    {
        mainCamera = Camera.main;
    }

    void Update()
    {
        Ray ray = mainCamera.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        
        if(Physics.Raycast(ray, out hit, LayerMask.NameToLayer("Table")))
        {
            Debug.Log("Ray to table");
            Debug.DrawLine(ray.origin, ray.origin + ray.direction * 100, Color.red);
            CurrentMousePosition = hit.point;
        }
    }
}