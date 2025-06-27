///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          27/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')         
    {
        printf("Output: %c\n", ch + 32);  
    }
    else if (ch >= 'a' && ch <= 'z')    
    {
        printf("Output: %c\n", ch - 32);  
    }
    else
    {
        printf("Output: %c\n", ch);       
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
