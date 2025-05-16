///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Descreption :   Displaying Number Line
//  Author :        Abhay Suresh Kale
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0) //Updator
    {
        iNo = -iNo;
    }

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: ");
    scanf("%d",&iValue);
    Display(iValue);
    
    return 0;
}

