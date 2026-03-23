#include <stdio.h>

void main(){
    int arr1[10][10], i, j, elements, rows, columns, row_sum = 0, matrix_sum = 0, diagonal_sum = 0;

    //Matrix A Input 
    printf("\nEnter the no. of rows & column of Matrix A : \n");
    scanf("%d%d", &rows, &columns);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter The Element of position (%d,%d) : ", (i+1), (j+1));
            scanf("%d", &arr1[i][j]);
        }
    }

    //Matrix A Display
    printf("\n");
    printf("The Output Of matrix A is : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf(" %4d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    //Final Output
    printf("\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            row_sum = row_sum + arr1[i][j];
        }
        printf("\nThe sum of row %d is %d", (i+1), row_sum);
        matrix_sum = matrix_sum + row_sum ;
        row_sum = 0;
    }
    printf("\nThe sum of all the elements of matrix is %d ", matrix_sum);
    printf("\n");
    if (rows == columns)
    {
        for ( i = 0; i < rows; i++)
        {
            diagonal_sum = diagonal_sum + arr1[i][i];
        }
        
    }
    printf("The sum of diagonal elements is %d ", diagonal_sum);
    
}