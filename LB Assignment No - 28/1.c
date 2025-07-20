///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Problems on File Handling
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>

int main()
{
    char Fname[20] = {'\0'};
    printf("Enter the file name to be opened: ");
    scanf("%s",Fname);
    int fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Error while opening/creating the file\n");
        return -1;
    }
    else
    {
        printf("Successfully opened the file\nFile Descriptor : %d\n", fd);
    }

    close(fd);

    return 0;
}