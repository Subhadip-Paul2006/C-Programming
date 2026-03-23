#include <stdio.h>

void main(){
    int n, i;
    int j = 0;
    printf("Enter the number of elements of array :- "); scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("element %d :- ", (i+1));scanf("%d", &arr[i]);
    }
    printf("\nOutput Of Array ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
    printf("\nOutput Of Modified Array ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}