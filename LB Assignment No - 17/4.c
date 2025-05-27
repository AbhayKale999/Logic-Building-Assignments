///////////////////////////////////////////////////////
//
//  File name :     4.c
//  Description :   Pattern Printing
//  Author :        Abhay Suresh Kale
//  Date :          27/05/2025
//
///////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iRow, int iCol)
{
    if (iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }

    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol) // Borders
            {
                printf("*\t");
            }
            else if (i + j < iRow + 1) // Upper triangle
            {
                printf("#\t");
            }
            else if (i + j > iRow + 1) // Lower triangle
            {
                printf("$\t");
            }
            else // On anti-diagonal
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
