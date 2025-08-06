///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          26/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleNibbles(UINT iNo)
{
    UINT iMask = 0xF000000F; 
    return iNo ^ iMask;
}

int main()
{
    UINT iNo = 0xF234567F;

    UINT iRet = ToggleNibbles(iNo);
    printf("Modified Number: %X\n", iRet); 
    return 0;
}

