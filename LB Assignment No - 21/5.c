///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on dynamic memory allocation
//  Author :        Abhay Suresh Kale
//  Date :          23/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int num = Arr[iCnt];
        int sum = 0;

        while(num != 0)
        {
            sum = sum + num % 10;  
            num = num / 10;   
        }

        printf("%d\t", sum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Memory was not allocated\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Summation of digits of each number:\n");
    DigitSum(p, iSize);

    free(p);
    return 0;
}
