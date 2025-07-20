///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on File Handling
//  Author :        Abhay Suresh Kale
//  Date :          02/07/2025
//
///////////////////////////////////////////////////////


#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd;
    char fname[100];
    char data[100];

    printf("Enter file name: ");
    scanf("%s", fname);

    while (getchar() != '\n');

    printf("Enter string to append : ");
    scanf("%[^\n]s", data); 

    fd = open(fname, O_WRONLY | O_APPEND);
    if (fd == -1)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    write(fd, data, strlen(data));
    write(fd, "\n", 1);  
    close(fd);

    printf("String appended successfully!\n");
    return 0;
}

