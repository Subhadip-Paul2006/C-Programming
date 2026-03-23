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
    for (int i = 0; i < n; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 || i == 0)
        {
            arr[i] = arr[i] + 10 ;
        }
        else
        {
            arr[i] = arr[i] * 2 ;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d " , arr[i]);
    }
    
    
    return 0;
}