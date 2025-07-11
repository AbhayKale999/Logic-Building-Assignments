///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Problems on Strings
//  Author :        Abhay Suresh Kale
//  Date :          27/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCapital = 0, iSmall = 0;
    while(*str != '\0')  
    {
        if(*str >= 'a' && *str <= 'z')  
        {
            iSmall++;
        }
        str++; 
    }
    while(*str != '\0')  
    {
        if(*str >= 'A' && *str <= 'Z')  
        {
            iCapital++;
        }
        str++; 
    }
    return iSmall - iCapital;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);
    printf("The Difference between frequency of Small and Capital is :%d",iRet);

    return 0;

}
