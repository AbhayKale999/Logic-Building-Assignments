///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          28/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iResult = iNo1 & iNo2;
    int iPos = 1;

    while(iResult != 0)
    {
        if(iResult & 1)
        {
            printf("Position: %d\n", iPos);
        }
        iResult = iResult >> 1;
        iPos++;
    }
}

int main()
{
    UINT iNo1 = 10;
    UINT iNo2 = 15; 
    CommonBits(iNo1, iNo2);  

    return 0;
}
