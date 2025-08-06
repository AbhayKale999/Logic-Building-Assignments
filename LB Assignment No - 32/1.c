///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          26/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;

int ChkBit(UINT iNo, int iPos)
{
    if(iPos < 1 || iPos > 32)
        return 0;

    UINT iMask = 1 << (iPos - 1);
    if(iNo & iMask)
        return 1;
    else
        return 0;
}

int main()
{
    UINT iNo = 10;
    int iPos = 2;

    int bRet = ChkBit(iNo, iPos);
    if(bRet)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
