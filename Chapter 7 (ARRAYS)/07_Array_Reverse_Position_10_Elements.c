/*[1,2,3,4,5,6,7,8,9,0] input 6
output [7,8,9,0,1,6,2,3,4,5]+*/
#include <stdio.h>
int main()
{
    int n,i,j, position;
    printf("Enter The No Of Elements ");
    scanf("%d", &n);
    printf("\n");
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i]=0;
    }
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }

    printf("Enter position");
    scanf("%d",&position);
    int temp = position;
    int c=0;
    for ( i = 0; i < position; i++)
    {
        arr2[i] = arr[temp];
        temp++;
        c++;
    }
     for ( i = 0; i < n; i++)
    {
        printf("%d \t",arr2[i]);
    }
    printf("\n");
    temp = 0;
    for (j = i; j <= n; j++)
    {
        arr2[j] = arr[temp];
        temp++;
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d \t",arr2[i]);
    }
}