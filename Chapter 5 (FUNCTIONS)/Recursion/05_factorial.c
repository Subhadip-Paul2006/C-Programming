#include <stdio.h>

int fact( int x ){
    if ( x == 0 )
    {
        return 1 ;
    }
    else{
        return x*fact(x-1);
    }
    
}

void main(){
    int x;
    printf("Enter No. ");
    scanf("%d",&x);
    int res = fact(x);
    printf("%d",res);  
}