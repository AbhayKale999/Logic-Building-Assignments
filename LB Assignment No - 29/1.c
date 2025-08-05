///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Problems on File Handling
//  Author :        Abhay Suresh Kale
//  Date :          20/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>   

int CountCapitals(char fName[])
{
    int fd = 0, iRet = 0, i = 0, iCnt = 0;
    char Buffer[1024];

    fd = open(fName, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the file name: ");
    scanf("%s", FileName); 

    iRet = CountCapitals(FileName);

    if(iRet != -1)
    {
        printf("Number of Capital characters are: %d\n", iRet);
    }

    return 0;
}
