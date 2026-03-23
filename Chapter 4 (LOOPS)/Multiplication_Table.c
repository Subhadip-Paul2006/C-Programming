#include <stdio.h>

int main(){
    int i , n ;
    printf("Enter the number which table to be printed ");
    scanf("%d",&n);
    for ( i = 0; i < 11 ; i++)
    {
        printf("%d X %d = %d\n" , i , n , i*n);
    }
    
    return 0;
}