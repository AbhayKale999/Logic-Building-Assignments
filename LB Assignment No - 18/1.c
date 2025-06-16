    ///////////////////////////////////////////////////////
    //
    //  File name :     1.c
    //  Description :   Problems on dynamic memory allocation
    //  Author :        Abhay Suresh Kale
    //  Date :          13/06/2025
    //
    ///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>  

int Difference(int Arr[], int iLength)
{
    int iEvenSum = 0 , iOddSum = 0 , iCount; 

    for (iCount = 0; iCount < iLength; iCount++)
    {
        if (Arr[iCount] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCount];
        }
        else
        {
         
            iOddSum = iOddSum + Arr[iCount];
        }
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    iRet = Difference(p, iSize);
    printf("Result is %d\n", iRet);

    free(p);
    return 0;
}
