///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          27/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int i;

    printf("---------------------------------------------------------\n");
    printf("| Symbol | Decimal | Hexadecimal | Octal                |\n");
    printf("---------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i < 32 || i == 127)
        {
            printf("|  N/A   |   %3d   |     %02X     |   %03o              |\n", i, i, i);
        }
        else
        {
            printf("|   %c    |   %3d   |     %02X     |   %03o              |\n", i, i, i, i);
        }
    }

    printf("---------------------------------------------------------\n");
}

int main()
{
    DisplayASCII();
    return 0;
}
