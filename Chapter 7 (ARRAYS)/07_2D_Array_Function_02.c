#include <stdio.h>

int main()
{
    int rows , columns ;
    printf("\nEnter the no of rows ");
    scanf("%d",&rows);
    printf("\nEnter the no fo columns");
    scanf("%d",&columns);
    int arr[rows][columns];

    for (int i = 0; i < rows ; i++)
    {
        for (int j = 0; j < columns ; j++)
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < rows ; i++)
    {
        for (int j = 0; j < columns ; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}