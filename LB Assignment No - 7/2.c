///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   USD to INR
//  Author :        Abhay Suresh Kale
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR = 0;
    if (iNo != 0)
    {
        INR = iNo * 70;
    }
    return INR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter amount of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);
    printf("Converted to INR: %d\n", iRet);

    return 0;
}
