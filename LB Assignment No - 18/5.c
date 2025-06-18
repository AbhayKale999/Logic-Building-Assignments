///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on dynamic memory allocation
//  Author :        Abhay Suresh Kale
//  Date :          13/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DivisibleBy11(int Arr[], int iLength)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 11 == 0))
        {
            printf("%d is divisible by 11\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    DivisibleBy11(p, iSize);

    free(p);
    return 0;
}
