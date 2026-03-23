#include <stdio.h>

int main(){
    int i = 1, n, sum = 0;
    printf("Enter the number up to which the sum is to be counted: ");
    scanf("%d", &n);
    for ( i ; i <= n ; i++)
    {
        sum+=i;
        printf("%d\n",sum);
    }
    
    return 0;
}