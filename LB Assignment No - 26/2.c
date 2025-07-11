///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int ChckFrequency(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch )
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character: \n");
    scanf(" %c",&cValue);

    iRet = ChckFrequency(Arr , cValue);
    printf("The freqency of the character is : %d\n",iRet);
    
    return 0;
}