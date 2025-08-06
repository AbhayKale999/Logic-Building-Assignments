///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          26/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    if(iPos < 1 || iPos > 32)
        return iNo;

    UINT iMask = 1 << (iPos - 1);
    iMask = ~iMask;

    return iNo & iMask;
}

int main()
{
    UINT iNo = 10;
    int iPos = 2;

    UINT iRet = OffBit(iNo, iPos);
    printf("Modified Number: %u\n", iRet);

    return 0;
}
