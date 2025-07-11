///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

void StrCpyX(char *src, char *des)
{
    while(*src != '\0')
    {
        *des = *src;
        src++;
        des++;
    }
    *des = '\0';
}
int main()
{
    char arr[30];
    char brr[30];

    printf("Enter the String");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,brr);
    printf("%s",brr);

    return 0;

}