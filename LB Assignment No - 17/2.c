///////////////////////////////////////////////////////
//
//  File name :     2.c
//  Description :   Pattern Printing
//  Author :        Abhay Suresh Kale
//  Date :          27/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = iCol; j >= 1; j--)
        {
            if (i == j)
            {
                printf("#\t");
            }
            if(i > j)
            {
                printf("@\t");
            }
            if(i < j)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of columns: ");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
