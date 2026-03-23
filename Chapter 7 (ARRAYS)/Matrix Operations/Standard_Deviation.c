#include <stdio.h>
#include<math.h>

int mean(int arr[], int a);
int varience(int arr[], float a);
int standard_deviation(int arr[], float a);

int mean(int arr[], int a){
    float m;
    m = a / sizeof(arr);
    return m;
}
int varience(int arr[], float a){
    int i;
    float x, y, z;
    z = 0;
    for ( i = 0; i < sizeof(arr); i++)
    {
        x = arr[i] - a ;
        y = pow( x, 2);
        z = z + y;
    }
    return z;
}
int standard_deviation(int arr[], float a){
    float x, y;
    x = a / sizeof(arr);
    y = sqrt(x);
    printf("\nThe Standard Deviation Is %.2f", y);
    return 0;
}

void main(){
    int arr[10];
    int i, elem_sum;
    float mean_value, varience_value, n;
    elem_sum = 0;
    printf("\n\t--- Value Input Of The Standard Deviation --- ");
    printf("\nEnter the number of elements = ");scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("\nPosition %d ", (i+1));
        scanf("%d", &arr[i]);
        elem_sum = elem_sum + arr[i] ;
    }
    mean_value = mean( arr, elem_sum);
    varience_value = ( arr, mean_value);
    standard_deviation( arr, varience_value);
}