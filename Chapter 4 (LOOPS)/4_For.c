#include <stdio.h>

int main(){
    int n , i ;
    printf("Enter the number of times loop will run");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Hello World %d\n",i);
    }
    
    return 0;
}