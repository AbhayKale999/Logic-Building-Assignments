///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          27/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

void Reverse(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1;
    char temp;

    while (iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter a string: ");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    printf("Reversed string is: %s\n", Arr);

    return 0;
}
