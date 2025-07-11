///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          27/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')  
    {
        if(*str >= 'A' && *str <= 'Z')  
        {
            iCnt++;
        }
        str++; 
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);
    printf("%d",iRet);

    return 0;

}
