#include <stdio.h>

int main()
{
    int number, n;
    printf("\nEnter no which multiplictaion table to be done ");
    scanf("%d", &number);
    printf("\nEnter the range ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = number * (i + 1);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\nThe Value of %d * %d = %d", number, i + 1, arr[i]);
    }

    return 0;
}