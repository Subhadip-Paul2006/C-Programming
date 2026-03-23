#include <stdio.h>

void main(){
    int n, i, num;
    num = 0;
    printf("Enter the number :- "); scanf("%d", &n);
    for ( i = 0; i <= n; i++)
    {
        num = num + i;
    }
    printf("\n %d", num);
}
    