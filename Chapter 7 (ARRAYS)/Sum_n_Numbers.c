#include <stdio.h>
int main(){
    int n,i,sum = 0;
    int arr[n];
    printf("Enter the number of elements of array : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element ");
        scanf("%d",&arr[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("\n");
    printf("\n The sum of the numbers of array is %d ",sum);
    return 0;
}