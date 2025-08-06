///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Problems on Bit Manipulation
//  Author :        Abhay Suresh Kale
//  Date :          28/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;
    while(iNo != 0)
    {
        iCount += (iNo & 1); 
        iNo = iNo >> 1;    
    }
    return iCount;
}

int main()
{
    UINT iNo = 11;  
    int iRet = CountOne(iNo);
    printf("Count of ON bits: %d\n", iRet);

    return 0;
}



