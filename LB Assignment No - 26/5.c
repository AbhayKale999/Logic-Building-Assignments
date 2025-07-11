///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1;
    char temp;

    while(iStart < iEnd)
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
    char Arr[100];

    printf("Enter the String: \n");
    scanf("%s", Arr);  

    StrRevX(Arr);

    printf("The modified String is: %s\n", Arr);

    return 0;
}
