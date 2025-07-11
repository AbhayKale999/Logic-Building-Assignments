///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

#define FALSE 0
#define TRUE 1
bool ChckCharacter(char *str, char ch)
{
    while(str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char Arr[20];
    char cValue;
    bool bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character: \n");
    scanf(" %c",&cValue);

    bRet = ChckCharacter(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Yes the String Contains the Character \n");
    }
    else
    {
        printf("The character is not present in the string \n");
    }


return 0;
}
