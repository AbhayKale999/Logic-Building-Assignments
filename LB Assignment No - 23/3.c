///////////////////////////////////////////////////////
//
//  File name :     3.c
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
        for (char c = ch; c <= 'Z'; c++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z') 
    {
        for (char c = ch; c >= 'a'; c--)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    else
    {
        
    }
}

int main()
{
    char cValue;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
