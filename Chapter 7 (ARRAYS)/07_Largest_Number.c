#include <stdio.h>

int main(){
    int n;
    printf("Enter The Number of Element ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the element");
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }
    printf("\nThe largest number is %d", largest);
    return 0;
}