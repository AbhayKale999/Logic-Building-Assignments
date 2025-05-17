///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Pattern Printing
//  Author :        Abhay Suresh Kale
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf(" * \t",iCnt);
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf(" # \t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}