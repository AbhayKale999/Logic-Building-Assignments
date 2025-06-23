///////////////////////////////////////////////////////
//
//  File name :     5.c
//  Description :   Problems on dynamic memory allocation
//  Author :        Abhay Suresh Kale
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLenght)
{
    int iCnt = 0,OddProduct = 1;

    for(iCnt = 0;iCnt < iLenght; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0 )
        {
            OddProduct = OddProduct * Arr[iCnt];
        }
    }
    return OddProduct;
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

    iRet = Product(p, iSize);

    printf("The product of odd elements is :%d ",iRet);

    free(p);
    return 0;


}

