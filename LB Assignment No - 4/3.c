///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Descreption :   Problem on factors (displaying non factors)
//  Author :        Abhay Suresh Kale
//  Date :          15/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCount = 0;
    for (iCount = 1; iCount < iNo; iCount++)
    {
        if ((iNo % iCount) != 0)
        {
            printf("The non Factors are : %d  \n",iCount);
        }
        
    }
    

}
int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}