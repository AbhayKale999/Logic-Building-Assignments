///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          26/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>


void DisplaySchedule(char cDiv)
{
    if(cDiv == 'A')
    {
        printf("Your exam is at 7AM");
    }
    else if(cDiv == 'B')
    {
        printf("Your exam is at 8:30AM");
    }
    else if(cDiv == 'C')
    {
        printf("Your exam is at 9:20AM");
    }
    else if(cDiv == 'D')
    {
        printf("Your exam is at 10:30AM");
    }

}
int main()
{
    char cValue = '\0';
    
    printf("Enter Character:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

}
