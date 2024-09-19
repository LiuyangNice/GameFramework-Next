using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssemblyModel : MonoBehaviour
{
    /// <summary>
    /// 当前拆卸/装配步骤
    /// </summary>
    public int currentStepIndex { get; private set; }
    /// <summary>
    /// 所有可拆卸部件
    /// </summary>
    private AssemblyPart[] assemblyParts;
    /// <summary>
    /// 所有部件的正确位置指示器
    /// </summary>
    private Dictionary<string,GameObject> assemblyPartsRightPosDic;
    /// <summary>
    /// 以步骤为key的部件集合字典
    /// </summary>
    private Dictionary<int, List<GameObject>> assembledComponents = new Dictionary<int, List<GameObject>>();
    /// <summary>
    /// 当前步骤完成拆卸的部件数量
    /// </summary>
    public int currentStepPartNumber = 0;
    // 在 Start 函数中初始化首个步骤
    private void Start()
    {
        assemblyParts = FindObjectsOfType<AssemblyPart>();
        assemblyPartsRightPosDic = new Dictionary<string, GameObject>();
        Transform rightTrans = transform.Find("RightPos");
        for (int i = 0; i < assemblyParts.Length; i++)
        {
            assemblyPartsRightPosDic.Add(assemblyParts[i].name,rightTrans.Find(assemblyParts[i].name).gameObject);
        }
        InitAssemblyPart();
        //StartNextStep(currentStepIndex);
    }

    /// <summary>
    /// 按顺序编号分组所有部件
    /// </summary>
    private void InitAssemblyPart()
    {
        for (int i = 0; i < assemblyParts.Length; i++)
        {
            if (!assembledComponents.ContainsKey(assemblyParts[i].disassemblyOrder))
            {
                assembledComponents[assemblyParts[i].disassemblyOrder] = new List<GameObject>();
            }
            assembledComponents[assemblyParts[i].disassemblyOrder].Add(assemblyParts[i].gameObject);
        }
    }

    /// <summary>
    /// 更改正确位置指示器显示状态
    /// </summary>
    public void ChangeRightPosObjState(string objName,bool state)
    {
        assemblyPartsRightPosDic[objName].SetActive(state);
    }

    /// <summary>
    /// 拆卸一个部件
    /// </summary>
    public void DisassemblyComponent(GameObject obj)
    {
        if (assembledComponents[currentStepIndex].Contains(obj))
        {
            currentStepPartNumber++;
        }

        if (AreAllComponentsDisassemblyInCurrentStep())
            CompleteStep();
    }
    /// <summary>
    /// 装配一个部件
    /// </summary>
    /// <param name="obj"></param>
    public void AssemblyComponent(GameObject obj)
    {
        if (AreAllComponentsAssemblyInCurrentStep())
            ReturnStep();
        if (assembledComponents[currentStepIndex].Contains(obj))
        {
            if (currentStepPartNumber > 0)
                currentStepPartNumber--;
        }
    }

    // 检查当前步骤的所有部件是否都已经拆卸完毕
    private bool AreAllComponentsDisassemblyInCurrentStep()
    {
        int totalComponentsCount = GetTotalComponentsInCurrentStep();

        return currentStepPartNumber == totalComponentsCount;
    }

    // 检查当前步骤的所有部件是否都已经装配完毕
    private bool AreAllComponentsAssemblyInCurrentStep()
    {
        return currentStepPartNumber == 0;
    }


    // 获取当前步骤中的部件总数
    private int GetTotalComponentsInCurrentStep()
    {
        return assembledComponents[currentStepIndex].Count;
    }

    /// <summary>
    /// 回退当前步骤
    /// </summary>
    private void ReturnStep()
    {
        Debug.Log("Assembly Step " + currentStepIndex + " completed!");
        if (currentStepIndex > 0)
        {
            currentStepIndex--;
            StartPreviousStep(currentStepIndex);
        }
        else
        {
            currentStepIndex = 0;
            Debug.Log("All assembly steps completed!");
        }
    }

    /// <summary>
    /// 完成当前步骤
    /// </summary>
    private void CompleteStep()
    {
        Debug.Log("Disassembly Step " + currentStepIndex + " completed!");

        currentStepIndex++;
        if (currentStepIndex < assembledComponents.Count)
        {
            StartNextStep(currentStepIndex);
        }
        else
        {
            currentStepIndex = assembledComponents.Count;
            currentStepPartNumber = 0;
            Debug.Log("All disassembly steps completed!");
        }
    }

    /// <summary>
    /// 开始下一个步骤
    /// </summary>
    /// <param name="stepIndex"></param>
    private void StartNextStep(int stepIndex)
    {
        Debug.Log("Starting step " + stepIndex);
        currentStepPartNumber = 0;
    }
    /// <summary>
    /// 开始上一个步骤
    /// </summary>
    /// <param name="stepIndex"></param>
    private void StartPreviousStep(int stepIndex)         
    {
        Debug.Log("Starting step " + stepIndex);
        currentStepPartNumber = assembledComponents[currentStepIndex].Count;
    }
}
