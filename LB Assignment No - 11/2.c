///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Pattern Printing
//  Author :        Abhay Suresh Kale
//  Date :          22/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    for(int iCnt = iNo; iCnt >= 1 ; iCnt--)
    {
        if (iNo > 0)
        {
            printf("%d\t#\t",iCnt);  
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}