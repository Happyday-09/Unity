using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BamsoniGenerator : MonoBehaviour
{
    public GameObject bamsongiPrefab;

     // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            GameObject bamsongi = Instantiate(bamsongiPrefab, 
                                                transform.position, 
                                                transform.rotation);
            bamsongi.transform.position = new Vector3(transform.position.x,
                                            transform.position.y + 1,
                                            transform.position.z + 1);

            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            Vector3 worldDir = ray.direction;

            //bamsongi.GetComponent<BamsongiController>().Shoot(new Vector3(0, 500, 2000));
            bamsongi.GetComponent<BamsongiController>().Shoot(worldDir * 2000);
        }
    }
}
