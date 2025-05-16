///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Descreption :   Find Factorial of a number
//  Author :        Abhay Suresh Kale
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
    {
        iMul = iMul * iCnt;        
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("The factorial is: %d",iRet);

    return 0;
}