///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          28/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;

int ChkBit(UINT iNo)
{
    UINT iMask = (1 << 8) | (1 << 11); 
    if((iNo & iMask) != 0)
        return 1;
    else
        return 0;
}

int main()
{
    UINT iNo = 257;  
    if(ChkBit(iNo))
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
