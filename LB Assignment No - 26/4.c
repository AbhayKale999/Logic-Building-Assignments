///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>

int LastOccur(char *str, char ch)
{
    int iIndex = 0;
    int iLast = -1;  

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLast = iIndex;  
        }
        str++;
        iIndex++;
    }

    return iLast;
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

    iRet = LastOccur(Arr, cValue);

    if(iRet == -1)
    {
        printf("Character not found in the string.\n");
    }
    else
    {
        printf("Index of last occurrence: %d\n", iRet);
    }

    return 0;
}
