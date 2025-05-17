///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Square feet to Square meter
//  Author :        Abhay Suresh Kale
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////


#include <stdio.h>

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is: %lf\n", dRet);

    return 0;
}
