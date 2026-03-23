#include <stdio.h>

int main(){
    int i = 72 ;    
    int *j = &i ;
    int **k = &j;

    printf("The Value Of i is %d",i);
    printf("\nThe Location Of i is %d",&i);
    printf("\nThe Value of j is %d",j);
    printf("\nThe Location Of J is %d",&j);
    printf("\nThe Value of k is %d",k);
    printf("\nThe Loctaiopn Of K is %d",&k);
    return 0;
}