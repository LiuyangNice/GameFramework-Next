using UnityEngine;
using UnityGameFramework.Runtime;

public class AssemblyPart : MonoBehaviour
{
    /// <summary>
    /// ��ж/װ��˳��
    /// ��0��ʼ
    /// </summary>
    public int disassemblyOrder;
    /// <summary>
    /// ����״̬
    /// trueΪ��װ�䣬falseΪ�Ѳ�ж
    /// </summary>
    private bool isAssembly = true;
    /// <summary>
    /// �Ƿ�����ק�ƶ�
    /// </summary>
    private bool isDragging = false;
    /// <summary>
    /// mesh��ײ��
    /// </summary>
    private MeshCollider[] meshCol;
    /// <summary>
    /// װ�䲿��������
    /// </summary>
    private AssemblyModel assemblyModel;
    /// <summary>
    /// ������ʼ��ȷλ��
    /// </summary>
    private Vector3 originPos;
    /// <summary>
    /// �Ƿ�����ƶ�
    /// </summary>
    private bool isCanMove;

    private Camera modelCam;
    private void Start()
    {
        originPos = transform.localPosition;
        assemblyModel = GetComponentInParent<AssemblyModel>();
        meshCol = GetComponentsInChildren<MeshCollider>();
        modelCam = GameObject.Find("ModelCamera").GetComponent<Camera>();
    }

    private Vector3 initialMousePos;    //�������ʼλ��
    private Vector3 originalPosition;
    private Vector3 offset;
    private void MouseButtonDown()
    {
        initialMousePos = GetMouseWorldPosition();
        if (!isCanMove)
            return;
        isDragging = true;
        offset = initialMousePos - transform.position;
        originalPosition = transform.position;
        if (!isAssembly)
        {
            assemblyModel.ChangeRightPosObjState(name, true);
        }
    }

    private void Update()
    {
        if (CheckDisassemblyOrder())
        {
            if (Input.GetMouseButtonDown(0))
                MouseButtonDown();

            if (isDragging && isCanMove)
            {
                Vector3 mousePosition = Input.mousePosition;
                mousePosition.z = transform.position.z - modelCam.transform.position.z;
                Vector3 targetPosition = modelCam.ScreenToWorldPoint(mousePosition);
                targetPosition.z = originalPosition.z; // ����������ԭʼZ��λ��
                transform.position = targetPosition - offset;
            }
            if (Input.GetMouseButtonUp(0))
                MouseButtonUp();
        }
        if (!Input.GetMouseButton(0) && !Input.GetMouseButton(1))
            CheckDeviceSign();
        else
            Log.Info("reset sign");
            //UISign.instance.ResetSign();
    }

    void CheckDeviceSign()
    {
        Log.Info("reset sign");
        Ray ray = modelCam.ScreenPointToRay(Input.mousePosition);
        int layerMask = 1 << 6;                 //��ʱָ������3��
        layerMask = ~layerMask;
        Debug.DrawRay(ray.origin, ray.direction * 500, Color.red);
        if (Physics.Raycast(ray, out RaycastHit hit,10000, layerMask))
        {
            Vector3 pos = new Vector3(hit.point.x, hit.point.y, transform.position.z);
            if (hit.collider.GetComponent<AssemblyPart>())
            {
                if (hit.collider.name.Equals(name))
                    Log.Info("reset sign");
            }
            else
            {
                if (hit.collider.transform.parent.name.Equals(name))
                    Log.Info("reset sign");
            }
        }
        else
        {
            Log.Info("reset sign");
        }
    }

    private Vector3 GetMouseWorldPosition()
    {
        Ray ray = modelCam.ScreenPointToRay(Input.mousePosition);
        Debug.DrawRay(ray.origin, ray.direction * 500, Color.red);
        int layerMask = 1 << 6;                 //��ʱָ������3��
        layerMask = ~layerMask;
        if (Physics.Raycast(ray, out RaycastHit hit,10000, layerMask))
        {
            Vector3 pos = new Vector3(hit.point.x, hit.point.y, transform.position.z);

            if (hit.collider.GetComponent<AssemblyPart>())
            {
                if (hit.collider.name.Equals(name))
                {
                    isCanMove = true;
                }
                else
                    isCanMove = false;
            }
            else
            {
                if (hit.collider.transform.parent.name.Equals(name))
                {
                    isCanMove = true;
                }
                else
                    isCanMove = false;
            }

            return pos;
        }
        else
        {
            isCanMove = false;
        }
        return Vector3.zero;
    }
    private void MouseButtonUp()
    {
        isDragging = false;
        assemblyModel.ChangeRightPosObjState(name, false);
        //�ƶ�����0.2m,����Ϊ�����Ѿ���ж����
        //��֮����Ϊ�����Ѿ�װ����
        if (GetDistanceToOriginPos() >= 0.2f)
        {
            if (!isAssembly)
                return;
            else
            {
                isAssembly = false;
                assemblyModel.DisassemblyComponent(gameObject);
            }
        }
        else
        {
            transform.localPosition = originPos;
            if (isAssembly)
                return;
            else
            {
                isAssembly = true;
                assemblyModel.AssemblyComponent(gameObject);
            }
        }
    }

    /// <summary>
    /// ��鲿����ж˳��
    /// </summary>
    /// <returns></returns>
    private bool CheckDisassemblyOrder()
    {
        if ((assemblyModel.currentStepIndex - disassemblyOrder == 1 && assemblyModel.currentStepPartNumber == 0)
            || assemblyModel.currentStepIndex - disassemblyOrder == 0)
        {
            for (int i = 0; i < meshCol.Length; i++)
            {
                meshCol[i].enabled = true;
            }
            return true;
        }
        else
        {
            for (int i = 0; i < meshCol.Length; i++)
            {
                meshCol[i].enabled = false;
            }
            return false;
        }
    }

    private float GetDistanceToOriginPos()
    {
        return Vector3.Distance(transform.localPosition, originPos);
    }

    private void PerformDisassembly()
    {
        // ���в�ж����
    }

    private void ResetPosition()
    {
        // ����λ�û������ϲ�ж˳������
    }
}