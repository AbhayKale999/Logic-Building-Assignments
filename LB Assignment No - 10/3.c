///////////////////////////////////////////////////////
//
//  File name :     3.c
//  Description :   Count of digits in between 3 to 7
//  Author :        Abhay Suresh Kale
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;  
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > 3 && iDigit < 7)  
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}

