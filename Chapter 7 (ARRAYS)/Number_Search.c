#include <stdio.h>

void PositiveSearch(int a[], int n);
void NegativeSearch(int a[], int n);
void ZeroSearch(int a[], int n);
void PrintArray(int a[], int n);

void PositiveSearch(int a[], int n)
{
    int count = 0 ;
    printf("The Positive Numbers Are :- ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            printf("%d ", a[i]);
            count++ ;
        }
    }
    printf("\nNumber of Positive Numbers are %d " , count );
    printf("\n");
}
void NegativeSearch(int a[], int n)
{
    int count = 0 ;
    printf("The Negative Numbers Are :- ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
            count++ ;
        }
    }
    printf("\nNumber of Negative Numbers are %d " , count );
    printf("\n");
}
void ZeroSearch(int a[], int n)
{
    int count = 0 ;
    printf("The Zero's Are :- ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            printf("%d ", a[i]);
            count++ ;
        }
    }
    printf("\nNumber of Zero's are %d " , count );
    printf("\n");
}
void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
}
    
int main()
{
    int n;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter value: ");
        scanf("%d", &arr[i]);
    }

    PrintArray(arr, n);
    PositiveSearch(arr, n);
    NegativeSearch( arr, n);
    ZeroSearch(arr, n);

    return 0;
}
