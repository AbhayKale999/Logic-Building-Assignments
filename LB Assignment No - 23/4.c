///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          27/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChckSpecial(char ch)
{
    int iCount = 0;

    while(ch != '\0')
    {
        if((ch >= 'A' ) && (ch <= 'Z'))
        {
            return 0;
        }
        else if((ch >= 'a' ) && (ch <= 'z'))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

}
int main()
{
    char cValue = '\0';
    bool bRet = FALSE;
    
    printf("Enter Character:");
    scanf("%c",&cValue);

    bRet = ChckSpecial(cValue);
    if(bRet == true)
    {
        printf("It is a Special Character");
    }
    else
    {
        printf("It is not a Special Character");
    }    
}