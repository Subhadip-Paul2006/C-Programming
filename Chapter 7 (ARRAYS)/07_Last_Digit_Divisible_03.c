#include <stdio.h>

void main(){
    int a,r,n,arr[50],arr2[50];
    printf("Enter the number of elements ");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
       printf("Enter the element\n ");
       scanf("%d",&arr[i]); 
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d\t ",arr[i]);
    }
    printf("\n the final output will be\n ");
    for (int i = 0; i < a; i++)
    {
         r;
         n=arr[i];
        while (n!=0)
        {
            r=n%10;
            n=n/10;
            if(r%3==0){
            arr[i]=0;
            break;
            }
        }     
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d\t ",arr[i]);
    }
}