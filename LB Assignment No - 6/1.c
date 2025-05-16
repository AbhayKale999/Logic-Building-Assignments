///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Descreption :   Number Category
//  Author :        Abhay Suresh Kale
//  Date :          16/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if (iNo <= 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number");
    scanf("%d",&iValue);
    Number(iValue);

    return 0;
}