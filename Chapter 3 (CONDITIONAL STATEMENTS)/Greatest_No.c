#include <stdio.h>

int main(){
    int a , b , c , d ;
    printf("\nEnter First number: ");
    scanf( "%d" , &a );
    printf("\nEnter Second number: ");
    scanf( "%d" , &b );
    printf("\nEnter Third number: ");
    scanf( "%d" , &c );
    printf("\nEnter Fourth number: ");
    scanf( "%d" , &d );
    if ( a > b && a > c && a > d ){
        printf("%d is greatest amoung all numbers " , a);
    }
    else if ( b > a && b > c && b > d ){
        printf("%d is greatest amoung all numbers " , b);
    }
    else if ( c > b && c > a && c > d ){
        printf("%d is greatest amoung all numbers " , c);
    }
    if ( d > b && d > c && d > a ){
        printf("%d is greatest amoung all numbers " , d);
    }
    return 0;
}