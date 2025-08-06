///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          26/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    if(iPos < 1 || iPos > 32)
        return iNo;

    UINT iMask = 1 << (iPos - 1);
    return iNo | iMask;
}

int main()
{
    UINT iNo = 10;
    int iPos = 3;

    UINT iRet = OnBit(iNo, iPos);
    printf("Modified Number: %u\n", iRet);

    return 0;
}
