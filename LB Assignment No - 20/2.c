///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on dynamic memory allocation
//  Author :        Abhay Suresh Kale
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOccurrence(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt; 
        }
    }
    return -1;
}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &iValue);

    iRet = FirstOccurrence(p, iSize, iValue);
    printf("Output: %d\n", iRet);

    free(p);
    return 0;
}

