///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

void strUppr(char *str)
{    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Updated string : %s\n",Arr);
    
    return 0;
}