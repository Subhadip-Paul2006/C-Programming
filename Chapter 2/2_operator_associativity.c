#include <stdio.h>

int main(){
    int a , b ,c ;
    float d;
    a = 3;
    b = 6;
    c = 9;
    d = 3.0 / 8 - 2;
    printf("The value is %d", a*b/c + 7);
    printf("\nThe value is %d where operation is 3*b/2*c+7*a ", 3*b/2*c + 7*a);
    printf("\n %f operaion is 3.0/8-2" , d);
    return 0;
}