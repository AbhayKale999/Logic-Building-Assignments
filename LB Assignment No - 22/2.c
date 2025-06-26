///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          26/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChckAlpha(char ch)
{
    int iCount = 0;

    while(ch != '\0')
    {
        if((ch >= 'A' ) && (ch <= 'Z'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

}
int main()
{
    char cValue = '\0';
    bool bRet = FALSE;
    
    printf("Enter Character:");
    scanf("%c",&cValue);

    bRet = ChckAlpha(cValue);
    if(bRet == true)
    {
        printf("It is a Alphabet");
    }
    else
    {
        printf("It is not a Alphabet");
    }    
}
