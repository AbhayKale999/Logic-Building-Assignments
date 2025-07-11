///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);  

    printf("Digits in the string: ");
    DisplayDigits(Arr);

    printf("\n");

    return 0;
}
