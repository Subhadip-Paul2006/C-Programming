#include <stdio.h>

void PrintArray(int a[], int n);
void ReverseArray(int a[], int n);

void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void ReverseArray(int a[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
}
int main()
{
    int n;
    printf("\nEnter the no of elements of array ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Value");
        scanf("%d", &arr[i]);
    }

    PrintArray(arr, n);
    ReverseArray(arr, n);
    PrintArray(arr, n);

    return 0;
}