///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          27/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal: %d\n", ch);
    printf("Octal: %o\n", ch);
    printf("Hexadecimal: %X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue); 

    Display(cValue);

    return 0;
}
