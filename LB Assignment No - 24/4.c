///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          27/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool ChckVowel(char *str)
{
    if (*str == '\0')
    {
        printf("There are no characters\n");
        return false;
    }

    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char Arr[50];
    bool bRet = false;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    bRet = ChckVowel(Arr);

    if (bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}
