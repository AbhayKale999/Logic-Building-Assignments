///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Problems on dynamic memory allocation
//  Author :        Abhay Suresh Kale
//  Date :          23/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0];
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    p = (int *) malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Memory was not allocated ");
        return -1;
    }

    printf("Enter the number of elements : ");  
    scanf("%d",&iSize);

    printf("Enter %d elements: \n",iSize);
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Entern element %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p, iSize);

    printf("The Lowest element is :%d ",iRet);

    free(p);
    return 0;
}