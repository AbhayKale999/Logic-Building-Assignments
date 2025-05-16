///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Descreption :   Displaying Number
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
        printf("%d  \n",iCnt);
    }

}
int main()
{
    int iValue = 0;
    printf("Enter the Number :");
    scanf("%d",&iValue);

    Display(iValue);

}