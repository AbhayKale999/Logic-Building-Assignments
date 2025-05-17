///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Km to Meter
//  Author :        Abhay Suresh Kale
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is: %d\n", iRet);

    return 0;
}
