#include <stdio.h>

int main(){
    int i , n ;
    printf("Enter the number which table to be printed in revers order ");
    scanf("%d",&n);
    for ( i = 10 ; i  ; i-- )
    {
        printf("%d X %d = %d\n" , i , n , i*n);
    }
    
    return 0;
}