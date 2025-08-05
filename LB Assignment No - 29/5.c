///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on File Handling
//  Author :        Abhay Suresh Kale
//  Date :          20/07/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>

void DisplayN(char FName[], int iSize)
{
    int fd = 0;
    char Buffer[1024] = {'\0'};

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open the file.\n");
        return;
    }

    int iRet = read(fd, Buffer, iSize);
    if (iRet > 0)
    {
        Buffer[iRet] = '\0';  
        printf("Data from file: \n");
        write(1, Buffer, iRet);  
    }

    close(fd);
}

int main()
{
    char FileName[30];
    int iValue = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);  

    printf("Enter the number of characters: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}
