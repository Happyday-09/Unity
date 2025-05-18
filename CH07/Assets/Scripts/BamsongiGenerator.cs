using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BamsongiGenerator : MonoBehaviour
{
    public GameObject bamsongiPrefab;

    // Start is called before the first frame update
    void Start()
    {
        if (Input.GetMouseButtonDown(0))
        {
            GameObject bamsongi = Instantiate(bamsongiPrefab);
            bamsongi.GetComponent<BamsongiController>().Shoot(new Vector3(0, 200, 3000));
        }
    }
    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            GameObject bamsongi = Instantiate(bamsongiPrefab,
                                                transform.position,
                                                 transform.rotation);
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            Vector3 worldDir = ray.direction;

            bamsongi.GetComponent<BamsongiController>().Shoot(worldDir * 2000);
        }
    }
}
