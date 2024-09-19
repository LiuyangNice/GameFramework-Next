
using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;
namespace GameLogic
{
    public class CameraConroller_s : MonoBehaviour
    {
        public Transform target;    //相机追随目标
        public float xSpeed = 200;  //X轴方向拖动速度
        public float ySpeed = 200;  //Y轴方向拖动速度
        public float mSpeed = 10;   //放大缩小速度
        public float yMinLimit = -50; //在Y轴最小移动范围
        public float yMaxLimit = 50; //在Y轴最大移动范围
        public float distance = 10;  //相机视角距离
        public float minDinstance = 2; //相机视角最小距离
        public float maxDinstance = 30; //相机视角最大距离
        public float x = 0.0f;
        public float y = 0.0f;
        public float damping = 5.0f;
        public bool needDamping = true;
        public Action lateUpdate;


        void Start()
        {
            Vector3 angle = transform.eulerAngles;
            x = angle.y;
            y = angle.x;
        }


        void LateUpdate() //处理相机部分
        {
            if (target)
            {
                if (Input.GetMouseButton(1))
                {
                    x += Input.GetAxis("Mouse X") * xSpeed * 0.02f;
                    y -= Input.GetAxis("Mouse Y") * ySpeed * 0.02f;
                    y = ClamAngle(y, yMinLimit, yMaxLimit);

                }
                distance -= Input.GetAxis("Mouse ScrollWheel") * mSpeed;
                distance = Mathf.Clamp(distance, minDinstance, maxDinstance);
                Quaternion rotation = Quaternion.Euler(y, x, 0.0f);
                Vector3 disVector = new Vector3(0.0f, 0.0f, -distance);
                Vector3 position = rotation * disVector + target.position;

                if (needDamping)
                {
                    transform.rotation = Quaternion.Lerp(transform.rotation, rotation, Time.deltaTime * damping);
                    transform.position = Vector3.Lerp(transform.position, position, Time.deltaTime * damping);
                }
                else
                {
                    transform.rotation = rotation;
                    transform.position = position;
                }
                if (lateUpdate != null)
                {
                    lateUpdate.Invoke();
                }
            }

        }
        Vector3 SmoothVector(Vector3 current, Vector3 target, float value = 0.5f)
        {
            return current * value + target * (1 - value);
        }
        static float ClamAngle(float angle, float min, float max)
        {
            if (angle < -360)
            {
                angle += 360;
            }
            if (angle > 360)
            {
                angle -= 360;
            }
            return Mathf.Clamp(angle, min, max);
        }
        public static Vector3 ScreenToWorldPoint(Vector3 screenPos, Camera mMapCamera)
        {
            double screenX = screenPos.x;
            double screenY = screenPos.y;
            double screenZ = screenPos.z;

            //����γ���������ü��ռ�����
            Matrix4x4 pMatrix = mMapCamera.projectionMatrix;
            double px = screenX / Screen.width;
            px = (px - 0.5f) * 2f;
            double py = screenY / Screen.height;
            py = (py - 0.5f) * 2f;
            double pz = (-screenZ - pMatrix.m23) / pMatrix.m22;
            double pw = screenZ;
            px *= pw;
            py *= pw;
            //�ü��ռ䵽����ռ�
            Matrix4x4 pInverseMatrix = mMapCamera.projectionMatrix.inverse;
            double vx = (pInverseMatrix.m00 * px + pInverseMatrix.m01 * py + pInverseMatrix.m02 * pz + pInverseMatrix.m03 * pw);
            double vy = (pInverseMatrix.m10 * px + pInverseMatrix.m11 * py + pInverseMatrix.m12 * pz + pInverseMatrix.m13 * pw);
            double vz = (pInverseMatrix.m20 * px + pInverseMatrix.m21 * py + pInverseMatrix.m22 * pz + pInverseMatrix.m23 * pw);

            Matrix4x4 vInverseMatrix = mMapCamera.worldToCameraMatrix.inverse;
            //vInverseMatrix.SetTRS(pos:Vector3.zero,vInverseMatrix.rotation,vInverseMatrix.lossyScale);

            //�۲�ռ䵽����ռ�
            //Matrix4x4 vInverseMatrix = mMapCamera.worldToCameraMatrix.inverse;
            double x = (vInverseMatrix.m00 * vx + vInverseMatrix.m01 * vy + vInverseMatrix.m02 * vz + vInverseMatrix.m03 * 1);
            double y = (vInverseMatrix.m10 * vx + vInverseMatrix.m11 * vy + vInverseMatrix.m12 * vz + vInverseMatrix.m13 * 1);
            double z = (vInverseMatrix.m20 * vx + vInverseMatrix.m21 * vy + vInverseMatrix.m22 * vz + vInverseMatrix.m23 * 1);
            return new Vector3((float)(x), (float)(y), (float)(z));
        }
    }
}

