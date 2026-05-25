#include <stdio.h>
#include <conio.h>
void selection_sort(int arr[], int n) 
{
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) 
    {
        min_idx = i;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_idx]) 
            {
                min_idx = j;
            }
        }
        // Swap arr[i] and arr[min_idx]
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void main() 
{
    int arr[20], n, i;
    clrscr();
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, n);
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    getch();
}
