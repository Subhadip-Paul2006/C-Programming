#include <stdio.h>

// Function Prototype
int sum ( int , int );
// Function Defination
int sum ( int x , int y ){
    printf("\n The sum is %d", x + y );
    return x+y;
}
int main(){
    sum( 3 , 5 );
    return 0;
}