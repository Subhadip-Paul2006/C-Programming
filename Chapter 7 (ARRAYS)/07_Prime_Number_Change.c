#include <stdio.h>

void prime_number(int arr[], int n);
void prime_number(int arr[], int n)
{
    int arr2[n];
    int temp, prime_check;
    printf("\nORIGINAL ARRAY:\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        prime_check = 1;
        if (arr[i] <= 1)
        {
            prime_check = 0;
        }
        else
        {
            for (int j = 2; j <= arr[i] / 2; j++)
            {
                if (arr[i] % j == 0)
                {
                    prime_check = 0;
                    break;
                }
            }
        }

        if (prime_check)
        {
            arr2[i] = arr[i] + 1;
        }
        else
        {
            arr2[i] = arr[i];
        }
    }
    printf("\nAFTER REMOVING PRIME NUMBER ARRAY:\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr2[i]);
    }
}

void main()
{
    int n, i;
    printf("Enter the number of elements of array : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the element of position %d: ", i);
        scanf("%d", &arr[i]);
    }
    prime_number(arr, n);
}