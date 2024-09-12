using GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityGameFramework.Runtime;

namespace GameLogic
{
    public class InputManager : BaseLogicSys<InputManager>
    {
        public override void OnApplicationPause(bool pause)
        {
            base.OnApplicationPause(pause);
        }

        public override void OnDestroy()
        {
            base.OnDestroy();
        }

        public override void OnDrawGizmos()
        {
            base.OnDrawGizmos();
        }

        public override void OnFixedUpdate()
        {
            base.OnFixedUpdate();
        }

        public override void OnLateUpdate()
        {
            base.OnLateUpdate();
        }

        public override void OnMapChanged()
        {
            base.OnMapChanged();
        }

        public override void OnRoleLogout()
        {
            base.OnRoleLogout();
        }

        public override void OnStart()
        {
            base.OnStart();
        }

        public override void OnUpdate()
        {
            base.OnUpdate();
            if (Input.GetMouseButtonDown(0))
            {
                MouseInputFunDown(Input.mousePosition);
            }
            if (Input.GetMouseButton(0))
            {
                MouseInputFunHold(Input.mousePosition);
            }
            if (Input.GetMouseButtonUp(0)) 
            {
                MouseInputFunUp(Input.mousePosition);
            }
        }
        Ray currentRay;
        RaycastHit hit;
        EventBox eventBox;
        public void MouseInputFunDown(Vector2 input)
        {
            currentRay = Camera.main.ScreenPointToRay(input);
            if (Physics.Raycast(currentRay, out hit))
            {
                if (hit.collider != null)
                {
                    eventBox = hit.collider.GetComponent<EventBox>();
                    if (eventBox)
                    {
                        eventBox.clickDown.Invoke(input,hit);
                    }
                }
            }
        }
        public void MouseInputFunHold(Vector2 input)
        {
            if (eventBox)
            {
                eventBox.clickHold.Invoke(input);
            }
        }
        public void MouseInputFunUp(Vector2 input)
        {
            if (eventBox)
            {
                eventBox.clickUp.Invoke(input);
            }
        }
    }
}
