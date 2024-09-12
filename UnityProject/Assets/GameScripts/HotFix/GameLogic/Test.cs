using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityGameFramework.Runtime;
using FluffyUnderware.Curvy;
namespace GameLogic
{
    public class Test : MonoBehaviour
    {
        public CurvySplineSegment head;
        public float uiScaleValue = 0.00925926f;
        // Start is called before the first frame update
        void Start()
        {
            var eventBox = GetComponent<EventBox>();
            if (eventBox)
            {
                eventBox.clickDown.AddListener(SelectDown);
                eventBox.clickHold.AddListener(SelectHold);
                eventBox.clickUp.AddListener(SelectUp);
            }
            uiScaleValue = head.transform.parent.parent.localScale.x;
        }

        // Update is called once per frame
        void Update()
        {
            Vector3 targetPos = Camera.main.WorldToScreenPoint(transform.position) * uiScaleValue;
            head.transform.position =  new Vector3(targetPos.x-Screen.width/2* uiScaleValue, targetPos.y-Screen.height/2* uiScaleValue, 100); 
        }
        public bool IsBeSelected=false;
        private bool isMouseDrag = false;
        Vector3 screenPostion;
        Vector3 offest;

        public void SelectDown(Vector2 inputPos,RaycastHit hit)
        {
            screenPostion = Camera.main.WorldToScreenPoint(transform.position);
            offest = gameObject.transform.position - Camera.main.ScreenToWorldPoint(new Vector3(inputPos.x,inputPos.y,screenPostion.z));
            isMouseDrag = true;
        }
        public void SelectHold(Vector2 inputPos)
        {
            if (isMouseDrag && IsBeSelected)
            {
                Vector3 currentScreentSpace = new Vector3(inputPos.x, inputPos.y, screenPostion.z);
                Vector3 currentPostion = Camera.main.ScreenToWorldPoint(currentScreentSpace)+offest;
                currentPostion = new Vector3(currentPostion.x,transform.position.y,currentPostion.z);
                gameObject. transform.position = currentPostion;
            }
        }
        public void SelectUp(Vector2 inputPos)
        {
            isMouseDrag = false;
            if (selectTarget != null)
            {
                transform.position = selectTarget.transform.position;
            }
        }
        private GameObject selectTarget;
        private void OnTriggerEnter(Collider other)
        {
            if (other.GetComponent<BoxOutline>()!= null && other.gameObject.name == gameObject.name)
            {
                selectTarget = other.gameObject;
            }
        }
        private void OnTriggerExit(Collider other)
        {
            if (other.GetComponent<BoxOutline>() != null && other.gameObject.name == gameObject.name)
            {
                selectTarget = null;
            }
        }
    }
}
