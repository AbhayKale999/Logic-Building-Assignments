///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          28/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    if(iStart < 1 || iEnd > 32 || iStart > iEnd)
        return iNo;

    UINT iMask = 0;
    for(int i = iStart; i <= iEnd; i++)
    {
        iMask |= (1 << (i - 1));
    }

    return iNo ^ iMask;
}

int main()
{
    UINT iNo = 897;
    int iStart = 9, iEnd = 13;

    UINT iRet = ToggleBitRange(iNo, iStart, iEnd);
    printf("Modified Number: %u\n", iRet);

    return 0;
}
