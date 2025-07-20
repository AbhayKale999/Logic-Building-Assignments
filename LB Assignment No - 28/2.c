///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on File Handling
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    char Fname[15] = {'\0'};
    printf("Enter the name of the file");
    scanf("%s",Fname);

    fd = creat(Fname,0777);


    if(fd == -1)
    {
        printf("File was not created");
        return -1;
    }
    return 0;
}