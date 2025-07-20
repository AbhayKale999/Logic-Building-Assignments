///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Problems on File Handling
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h> 
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0 , iRet = 0;
    char Buffer[50] = {'\0'}; //to avoid garbage value \0

    printf("Enter the file name that you want to open :  \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY); 
    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File is succesfully opened with fd :  %d\n",fd);
        iRet = read(fd,Buffer,11); //strlen cant be used cuz there is no value
        printf("Data from file is : %s \n ",Buffer);
        close(fd);
    }
    return 0;
}
  

