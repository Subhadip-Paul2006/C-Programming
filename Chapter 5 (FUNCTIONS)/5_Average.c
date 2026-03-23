#include <stdio.h>
int average ( int a , int b , int c );

int average ( int a , int b , int c ){
    float avg;
    avg = ( a + b + c ) / 3.0 ;
    printf("The average of number %d , %d , %d is %f " , a , b , c , avg);
    return 0;
}

int main(){
    int x , y , z ;
    printf("Enter the first value  ");
    scanf("%d",&x);
    printf("\nEnter the first value  ");
    scanf("%d",&y);
    printf("\nEnter the first value  ");
    scanf("%d",&z);
    average( x , y , z );
    return 0;
}