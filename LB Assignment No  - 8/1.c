///////////////////////////////////////////////////////
//
//  File name :     1.c
//  Description :   Calculate Radius of a circle
//  Author :        Abhay Suresh Kale
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float PI = 3.14;

    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %f\n", dRet);

    return 0;
}
