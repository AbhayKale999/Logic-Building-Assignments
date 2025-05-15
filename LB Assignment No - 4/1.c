///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Descreption :   Problem on factors (Multiplication of factors)
//  Author :        Abhay Suresh Kale
//  Date :          15/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt = 1;iCnt <= iNo / 2;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {  
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);
    printf("%d  \n",iRet);

    return 0;

}
