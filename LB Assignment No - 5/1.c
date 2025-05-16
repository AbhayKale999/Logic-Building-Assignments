///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Descreption :   Pattern Printing
//  Author :        Abhay Suresh Kale
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCount = 0;
    if ( iNo < 0)
    {iNo = -iNo;}

    for(iCount = 1 ; iCount <= iNo ; iCount++)
    {
        printf("$  *\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Pattern(iValue);
}