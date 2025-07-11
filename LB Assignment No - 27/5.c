///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

void StrCatX(char *src, char *dest)
{
   
    while(*src != '\0')    
    {
        src++;
    }

    while(*dest != '\0')    
    {
        *src = *dest;   
        src++;         
        dest++;         
    }

    *src = '\0';  
}
int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = " Logic Building";  

    StrCatX(arr, brr);

    printf("%s\n", arr); 

    return 0;
}
