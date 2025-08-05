///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Problems on File Handling
//  Author :        Abhay Suresh Kale
//  Date :          20/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int CountChar(char FName[],char ch)
{
    int fd = 0, iRet = 0, i = 0, iCnt = 0, iCount = 0;
    char Buffer[1024];

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Cant find any file \n");
        return -1;
    }
    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ch)
            {
                iCount++;
            }
        }
    }
    return iCount;

}
int main()
{
    char FileName[30];
    int iRet = 0;
    char cValue;
    printf("Enter the file name : ");
    scanf(" %c",FileName);

    printf("Enter the character to be found:");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);
    printf("The frequency of the Character is : %d",iRet);

    return 0;
}
