///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Fahrenheit to celsius
//  Author :        Abhay Suresh Kale
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0 / 9.0);
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is: %lf\n", dRet);

    return 0;
}
