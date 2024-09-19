using UnityEngine;
using UnityGameFramework.Runtime;

public class AssemblyPart : MonoBehaviour
{
    /// <summary>
    /// 拆卸/装配顺序
    /// 从0开始
    /// </summary>
    public int disassemblyOrder;
    /// <summary>
    /// 部件状态
    /// true为已装配，false为已拆卸
    /// </summary>
    private bool isAssembly = true;
    /// <summary>
    /// 是否在拖拽移动
    /// </summary>
    private bool isDragging = false;
    /// <summary>
    /// mesh碰撞器
    /// </summary>
    private MeshCollider[] meshCol;
    /// <summary>
    /// 装配部件管理类
    /// </summary>
    private AssemblyModel assemblyModel;
    /// <summary>
    /// 部件初始正确位置
    /// </summary>
    private Vector3 originPos;
    /// <summary>
    /// 是否可以移动
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

    private Vector3 initialMousePos;    //鼠标点击初始位置
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
                targetPosition.z = originalPosition.z; // 保持物体在原始Z轴位置
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
        int layerMask = 1 << 6;                 //此时指定检测第3层
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
        int layerMask = 1 << 6;                 //此时指定检测第3层
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
        //移动超过0.2m,则认为部件已经拆卸下来
        //反之则认为部件已经装配上
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
    /// 检查部件拆卸顺序
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
        // 进行拆卸操作
    }

    private void ResetPosition()
    {
        // 重置位置或处理不符合拆卸顺序的情况
    }
}