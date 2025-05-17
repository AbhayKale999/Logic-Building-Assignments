///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Program to find difference between even and  odd factorial of a given number
//  Author :        Abhay Suresh Kale
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOdd = 1;
    int iEven = 1;
    int iDiffSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
           iOdd = iOdd * iCnt;
        }
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
           iEven = iEven * iCnt;
        }
    }
    iDiffSum = iEven - iOdd;
    return iDiffSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter Number: ");
    scanf("%d", &iValue); 

    iRet = FactorialDiff(iValue);
    printf(" Diff is: %d\n", iRet); 

    return 0;
}
