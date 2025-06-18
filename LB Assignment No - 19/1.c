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

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;

}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    int *p = NULL;

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
    iRet = CountEven(p , iSize);
    printf("The frequency of even numbers are : %d",iRet);

    free(p);

    return 0;
    
}
