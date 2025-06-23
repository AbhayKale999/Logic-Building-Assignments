///////////////////////////////////////////////////////
//
//  File name :     1.c
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

BOOL CheckNo(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }    
    }
    return false;
}

int main()
{
    int iCnt = 0, iSize = 0, iValue = 0;
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
    printf("Enter the element to find:");
    scanf("%d",&iValue);

    bRet = CheckNo(p , iSize, iValue);
    if(bRet == true)
    {
        printf("No is present");
    }
    else
    {
        printf("No is absent");
    }

    free(p);

    return 0;
    
}

