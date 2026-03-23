#include <stdio.h>

int main(){
    int product=1;
    int n ;
    printf("Enter no which factorial to be taken ");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++)
    {
        product*=i;
    }
    printf("%d",product);
    return 0;
}