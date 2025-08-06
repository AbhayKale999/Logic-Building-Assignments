///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          26/07/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

typedef unsigned int UINT;


UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;
    return (iNo ^ iMask);  
}


int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    iRet = OffBit(iValue);     

    printf("Modified number is: %u\n", iRet);

    return 0;
}
