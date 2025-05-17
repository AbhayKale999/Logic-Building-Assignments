///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Reverse Number
//  Author :        Abhay Suresh Kale
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0) 
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit; 
        iNo = iNo / 10;
    }
    printf("Reversed number is: %d\n", iRev);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}
