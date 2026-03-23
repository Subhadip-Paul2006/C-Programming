#include <stdio.h>

void main()
{
    int arr1[10][10], arr2[10][10], arr3[10][10], a, b, m, n, i, j;
    printf("\n Enter The Number Of Rows & Columns Of Matrix A : ");
    scanf("%d%d", &a, &b);
    printf("\n Enter The Number Of Rows & Columns Of Matrix B : ");
    scanf("%d%d", &m, &n);

    // Checking If Matrix Possible Or Not
    if ((a != m) || (b != n))
    {
        printf("\n Matrix A & B cannot be substracted ");
        return; // Stop further execution
    }
    else
    {
        printf("\nThe matrix A & B can be substracted ");
    }

    // Matrix A declaration
    printf("\nEnter the elements of Matrix A : \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("Enter The Element of position (%d,%d) : ", (i+1), (j+1));
            scanf("%d", &arr1[i][j]);
        }
    }

    // Matrix A Output
    printf("\n");
    printf("The Output Of matrix A is : \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" %4d ", arr1[i][j]);
        }
        printf("\n");
    }

    // Matrix B declaration
    printf("\n");
    printf("\nEnter the elements of Matrix B : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter The Element of position (%d,%d) : ", (i+1), (j+1));
            scanf("%d", &arr2[i][j]);
        }
    }

    // Matrix B Output
    printf("\n");
    printf("The Output Of matrix B is : \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" %4d ", arr2[i][j]);
        }
        printf("\n");
    }

    // Matrix C Substraction Operation
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    // Matrix C Output
    printf("\n");
    printf("The Output Of matrix C is :\n ");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf(" %4d ", arr3[i][j]);
        }
        printf("\n");
    }
}