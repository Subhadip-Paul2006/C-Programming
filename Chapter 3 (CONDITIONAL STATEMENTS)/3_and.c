#include <stdio.h>

int main(){
    int a = 0;int b = 0 ;
    printf("%d AND %d %d \n", a , b , a && b);
    int c = 1;int d = 0;
    printf("%d AND %d %d \n", c , d , c && d);
    int e = 1;int f = 1;
    printf("%d AND %d %d \n", e , f , e && d);
    return 0;
}