///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Problems on dynamic memory allocation
//  Author :        Abhay Suresh Kale
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////
#include<Stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLenght, int iStart, int iEnd)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
    printf("\n");
}
int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&iSize);
    
    printf("Enter the starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter the ending point : \n");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("No memory was allocated");
        return -1;
    }
    printf("Enter %d elements \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element :  \n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Range(p ,iSize,iValue1,iValue2);

    free(p);

    return 0;
}