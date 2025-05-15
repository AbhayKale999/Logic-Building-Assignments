///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Descreption :   Problem on factors (Displaying sum of Non Factors)
//  Author :        Abhay Suresh Kale
//  Date :          15/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

int  SumNonFact(int iNo)
{
    int iCount = 0;
    int iSum = 0;
    for (iCount = 1; iCount < iNo; iCount++)
    {
        if ((iNo % iCount) != 0)
        {
            iSum = iSum + iCount;
        }
        
    }
    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);

    return 0;
}