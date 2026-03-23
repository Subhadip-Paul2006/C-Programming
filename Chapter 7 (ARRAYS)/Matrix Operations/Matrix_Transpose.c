#include <stdio.h>

void main(){
    int arr1[10][10],arr2[10][10], i, j, elements, rows, columns, row_sum = 0, matrix_sum = 0;

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

    //Matrix Opperation
    for ( i = 0; i < rows; i++)
    {
        for ( i = 0; i < columns; i++)
        {
            arr2[columns][rows] == arr1[row_sum][columns];
        }
        
    }

    //Output Matrix
    printf("\nThe transpose of Matrix A is : ");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf(" %4d ", arr2[i][j]);
        }
        printf("\n");
    }

}