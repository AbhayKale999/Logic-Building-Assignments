///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountSpace(char *str)
{
    int iCount =  0;
    
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);

    printf("Number of white spaces are : %d\n",iRet);
    
    return 0;
}