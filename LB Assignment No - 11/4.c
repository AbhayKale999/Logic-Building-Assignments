///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Pattern Printing
//  Author :        Abhay Suresh Kale
//  Date :          22/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    for(int iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if (iNo > 0)
        {
            printf("#\t%d\t*\t",iCnt);  
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