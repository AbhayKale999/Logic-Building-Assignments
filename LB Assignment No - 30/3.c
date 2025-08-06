///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          20/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x08104040; 
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)  
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("7th, 15th, 21st and 28th bits are ON\n");
    }
    else
    {
        printf("One or more of 7th, 15th, 21st or 28th bits are OFF\n");
    }

    return 0;
}
