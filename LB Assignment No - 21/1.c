///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Problems on dynamic memory allocation
//  Author :        Abhay Suresh Kale
//  Date :          23/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax = Arr[0];
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(p, iSize);

    printf("The highest element is :%d ",iRet);

    free(p);
    return 0;
}