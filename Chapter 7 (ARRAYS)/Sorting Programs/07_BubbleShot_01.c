#include <stdio.h>

void main(){
    int n,i,j,t;
    printf("Enter the number of elements of array : ");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element : ");
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
            
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}