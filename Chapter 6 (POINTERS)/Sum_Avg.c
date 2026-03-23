#include <stdio.h>
int* sum( int , int );
float* average( int , int );

int* sum( int a , int b  ){
    int s  = a + b ;
    int* ptr = &s ;
    printf( "Averag is %d\n" , s );
    return ptr;
}
float* average( int a , int b  ){
    float avg  = ( a + b ) / 2.0 ;
    float* ptr = &avg ;
    printf( "Averege is %f\n" , avg );
    return ptr;
}

int main(){
    int x = 10 , y = 20 ;
    int *ptr1;
    float *ptr2;
    ptr1 = sum( x , y );
    ptr2 = average( x , y );
    printf("Address are sum %u\n average is %u",ptr1 , ptr2);
    return 0;
}