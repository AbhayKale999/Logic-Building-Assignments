///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

int FirstOccur(char *str, char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;  
        }
        str++;
        iIndex++;
    }

    return -1;  
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the Character: \n");
    scanf(" %c", &cValue);

    iRet = FirstOccur(Arr, cValue);

    if(iRet == -1)
    {
        printf("Character not found in the string.\n");
    }
    else
    {
        printf("Index of first occurrence: %d\n", iRet);
    }

    return 0;
}
