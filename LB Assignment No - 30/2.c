///////////////////////////////////////////////////////
//
//  File name :     2.c
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
    UINT iMask1 = 0x00000010; 
    UINT iMask2 = 0x00020000; 
    UINT iResult = 0;

    iResult = iNo & (iMask1 | iMask2);

    if(iResult == (iMask1 | iMask2)) 
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
        printf("5th and 18th bits are ON\n");
    }
    else
    {
        printf("5th and/or 18th bit is OFF\n");
    }

    return 0;
}

