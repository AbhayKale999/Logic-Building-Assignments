///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src; 
        src++;          
        dest++;        
        iCnt--;         
    }
    *dest = '\0';      
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];  
    StrNCpyX(arr, brr, 10);  

    printf("%s\n", brr);  

    return 0;
}
