///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>


void StrNCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')  
        {
            *dest = *src; 
            dest++;                         
        }
        src++;
               
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];  
    StrNCpyX(arr, brr);  

    printf("%s\n", brr);  

    return 0;
}
