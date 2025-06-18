///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Problems on dynamic memory allocation
//  Author :        Abhay Suresh Kale
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL Check11(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iCnt = 0, iSize = 0;
    int *p = NULL;
    BOOL bRet = false;

    printf("Enter number of elements :  ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("No memory was allocated \n");
        return -1;
    }

    printf("Enter %d elements: \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check11(p , iSize);
    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
    
}
