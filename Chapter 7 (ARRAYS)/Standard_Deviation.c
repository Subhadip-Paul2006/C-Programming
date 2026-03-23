#include <stdio.h>
#include <math.h>

float mean(int arr[], int n);
float variance(int arr[], int n, float mean);
void standard_deviation(float variance);

float mean(int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum / n;
}

float variance(int arr[], int n, float mean)
{
    float sum, x;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        x = pow(arr[i] - mean, 2);
        sum = sum + x;
    }
    return (sum / n);
}

void standard_deviation(float variance)
{
    float var;
    var = sqrt(variance);
    printf("\nThe Standard Deviation is: %.2f\n", var);
}

main()
{
    int arr[10], n;
    printf("\n--- Value Input For Standard Deviation ---\n");
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);
    if (n > 10 || n <= 0)
    {
        printf("Invalid number of elements!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    float mean_value = mean(arr, n);
    float variance_value = variance(arr, n, mean_value);
    standard_deviation(variance_value);
    return 0;
}
