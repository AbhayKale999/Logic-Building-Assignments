///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Program to find odd factorial of a given number
//  Author :        Abhay Suresh Kale
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
           iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter Number: ");
    scanf("%d", &iValue); 

    iRet = OddFactorial(iValue);
    printf("Odd factorial is: %d\n", iRet); 

    return 0;
}
