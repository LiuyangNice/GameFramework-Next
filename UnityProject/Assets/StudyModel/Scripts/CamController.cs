using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class CamController : MonoBehaviour
{

    private Transform cameraObj;
    public Transform targetTrans;
    #region 摄像机控制
    public float xSpeed = 250.0f;
    public float ySpeed = 120.0f;
    //Rotate Limit
    public float yMinLimit = -20f;
    public float yMaxLimit = 80f;
    //Limit value of rotation
    public float xMinLimit = -360;
    public float xMaxLimit = 360;
    public float distance = 4.0f;
    Quaternion rotation;
    Vector3 position;
    float LerpTime = 10f;
    float movSpeedScroll = 1f;
    Vector3 targetOffset = Vector3.zero;
    float nearLimit = 1.1f;
    float farLimit = 4000f;
    //鼠标旋转角度
    float x;
    float y;
    //摄像机倾斜角度
    float cameraY;
    //最小倾斜角度
    public float minTiltAngle;
    //缩放系数
    public float scaleValue;

    private Vector3 defaultPos;
    #endregion


    // Start is called before the first frame update
    void Start()
    {
        x = transform.eulerAngles.y;
        y = transform.eulerAngles.x;

        cameraObj = transform.GetChild(0);
        cameraY = cameraObj.localEulerAngles.x > 0 ? cameraObj.localEulerAngles.x - 360 : cameraObj.localEulerAngles.x;
        //Debug.Log(cameraY);
        defaultPos = transform.localPosition;
        InitTransPos();
    }

    private void InitTransPos()
    {
        nearLimit = 1f * scaleValue;
        farLimit = 2.1f * scaleValue;
    }
    /// <summary>
    /// 修改movSpeedScroll的值
    /// </summary>
    void ChangeMovSpeedScrollValue()
    {
        if (distance > 4 * scaleValue)
        {
            xSpeed = 250;
            movSpeedScroll = 5 * scaleValue;
        }
        else if (distance > 2 * scaleValue && distance <= 4 * scaleValue)
        {
            xSpeed = 100;
            movSpeedScroll = 0.6f * scaleValue;
        }
        else if (distance > 1.2 * scaleValue && distance <= 2 * scaleValue)
        {
            xSpeed = 60;
            movSpeedScroll = 0.3f * scaleValue;
        }
        else if (distance > 0.2 * scaleValue && distance <= 1.2 * scaleValue)
        {
            xSpeed = 20;
            movSpeedScroll = 0.1f * scaleValue;
        }
    }

    void LateUpdate()
    {
        if (!IsTouchUI())
        {
            //ChangeMovSpeedScrollValue();
            //return;
            if (targetTrans)
            {
                if (Application.platform == RuntimePlatform.WindowsEditor || Application.platform == RuntimePlatform.WindowsPlayer)
                {
                    if (Input.GetMouseButton(0))
                    {
                        //cameraY -= Input.GetAxis("Mouse Y") * xSpeed * 0.02f;
                        //cameraY = ClampAngle(cameraY, minTiltAngle, 0);
                        //rotation = Quaternion.Euler(cameraY, 0, 0);
                        //cameraObj.localRotation = Quaternion.Lerp(cameraObj.localRotation, rotation, Time.deltaTime * LerpTime);
                    }
                    else
                    {
                        if (Input.GetMouseButton(1))
                        {
                            x += Input.GetAxis("Mouse X") * xSpeed * 0.02f;
                            x = ClampAngle(x, xMinLimit, xMaxLimit);
                            y -= Input.GetAxis("Mouse Y") * xSpeed * 0.02f;
                            y = ClampAngle(y, yMinLimit, yMaxLimit);
                            //Debug.Log(x + "+" + y);
                        }

                        if (Input.GetAxis("Mouse ScrollWheel") != 0)
                        {
                            distance -= Input.GetAxis("Mouse ScrollWheel") * movSpeedScroll;
                            distance = Mathf.Clamp(distance, nearLimit, farLimit);
                        }
                        rotation = Quaternion.Euler(y, x, 0);
                        position = rotation * new Vector3(0.0f, 0.0f, -distance) + targetTrans.position + targetOffset;
                        transform.position = Vector3.Lerp(transform.position, position, Time.deltaTime * LerpTime);
                        transform.rotation = Quaternion.Lerp(transform.rotation, rotation, Time.deltaTime * LerpTime);
                    }
                }
            }
        }

    }

    public void ResetCamera()
    {
        distance = 4;
        //transform.localPosition = Vector3.back * 4;
        transform.localPosition = defaultPos;
        transform.localEulerAngles = Vector3.zero;
        x = y = 0;
    }

    public void SetTarget(Vector3 rotation, Transform target = null, float dis = 0)
    {
        if(target)
            targetTrans = target;
        x = rotation.y;
        y = rotation.x;
        distance = Mathf.Clamp(dis, nearLimit, farLimit); ;
    }

    private bool IsTouchUI()
    {
        //bool touchedUI = false;
        //if (EventSystem.current.IsPointerOverGameObject())
        //    touchedUI = true;
        ////Debug.Log("是否点到UI" + touchedUI);
        //return touchedUI;
        return false;
    }
    static float ClampAngle(float angle, float min, float max)
    {
        if (angle < -360)
            angle += 360;
        if (angle > 360)
            angle -= 360;
        return Mathf.Clamp(angle, min, max);
    }
}
