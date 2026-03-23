#include <stdio.h>

int sum( int* , int* );
int sum(int *a , int *b ){
    *a = 6 ;
    return ( *a + *b );
}
int main(){
    int x = 1 , y = 2;
    printf("The sum is %d" , sum( &x , &y ));
    printf("The Value of x is %d",x);
    return 0;
}