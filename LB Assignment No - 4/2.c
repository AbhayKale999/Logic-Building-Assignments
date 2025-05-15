///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Descreption :   Problem on factors in decreasing order
//  Author :        Abhay Suresh Kale
//  Date :          15/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo / 2 ; iCnt >= 1 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d \n",iCnt);
        }

    }

}
int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}