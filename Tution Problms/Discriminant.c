#include <stdio.h>
#include <math.h>
float root1 , root2 ;
int main(){
    int a , b , c , discriminant ;
    printf("\nEnter the value of A ");
    scanf("%d" , &a );
    printf("\nEnter the value of B ");
    scanf("%d" , &b );
    printf("\nEnter the value of C ");
    scanf("%d" , &c );
    discriminant = pow( b , 2 ) - ( 4 * a * c) ;
    if ( discriminant < 0 ){
        printf("\nNo Real Roots and Imaginary ");
    }
    else if (discriminant == 0)
    {
        root1 = ( -b ) / (2.0 * a) ;
        printf("\n Only 1 real root and that is %f " , root1 );
    }
    else if (discriminant > 0)
    {
        root1 = ( ( -b ) + sqrt( discriminant ) ) / (2.0 * a);
        root2 =  ( ( -b ) - sqrt(discriminant) ) / (2.0 * a) ;
        printf("There at 2 roots and they are %f and %f " , root1 , root2 );
    }
    
    
    return 0;
}