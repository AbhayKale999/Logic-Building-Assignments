///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Descreption :   First 5 multiples of N
//  Author :        Abhay Suresh Kale
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        printf("%d \t",iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d \t",&iValue);
    MultipleDisplay(iValue);

    return 0;
}