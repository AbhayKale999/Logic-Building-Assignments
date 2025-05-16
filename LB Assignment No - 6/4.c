///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Descreption :   Accepting number and displaying its table
//  Author :        Abhay Suresh Kale
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void iTable(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf(" %d\n", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iTable(iValue);

    return 0;
}
