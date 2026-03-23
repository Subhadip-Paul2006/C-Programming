#include <stdio.h>

void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void PrintArray( int a[] , int n ){
    for (int i = 0 ; i < n ; i++ )
    {
        printf("%d " , a[i] );
    }
    printf("\n"); 
}
int main(){
    int a = 4, b = 6;
    printf("The Initial value of a is %d and the Initial value of b is %d", a, b);
    swap(&a, &b);
    printf("The New value of a is %d and the New value of b is %d", a, b);
    return 0;
}