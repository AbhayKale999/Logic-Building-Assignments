///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          28/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;

int ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1 << (iPos1 - 1);
    UINT iMask2 = 1 << (iPos2 - 1);

    if((iNo & iMask1) || (iNo & iMask2))
        return 1;
    else
        return 0;
}

int main()
{
    UINT iNo = 10;  
    int iPos1 = 3;
    int iPos2 = 7;

    if(ChkBit(iNo, iPos1, iPos2))
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
