///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Problems on dynamic memory allocation
//  Author :        Abhay Suresh Kale
//  Date :          23/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0,Digit3 = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > 100 && Arr[iCnt] < 1000)
        {
            printf("The number of three digits are: %d \n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements : ");  
    scanf("%d",&iSize);
    
    p = (int *) malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Memory was not allocated ");
        return -1;
    }
    printf("Enter %d elements: \n",iSize);
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Entern element %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);

    free(p);
    return 0;
}