using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace GameLogic
{
    public class EventBox : MonoBehaviour
    {
        public UnityEvent<Vector2, RaycastHit> clickDown;
        public UnityEvent<Vector2> clickHold;
        public UnityEvent<Vector2> clickUp;

        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }
    }
}
