///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Descreption :   Problem on factors (Displaying Difference of summation between Non Factors and factors)
//  Author :        Abhay Suresh Kale
//  Date :          15/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCount = 0;
    int iSumFact= 0;
    int iSumNonFact= 0;

    for (iCount = 1; iCount < iNo; iCount++)
    {
        if((iNo % iCount) == 0)
        {
           iSumFact = iSumFact + iCount;
        }
        else
        {
             iSumNonFact = iSumNonFact + iCount; 
        }
    }
    return iSumFact - iSumNonFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}