#include <stdio.h>

int main(){

    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 5;
    int *ptr1 = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr1);
    ptr1++;
    printf("The value of ptr is %u\n", ptr1);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char b = 'A';
    char *ptr2 = &b;
    printf("The address of b is %u\n", &b);
    printf("The address of b is %u\n", ptr2);
    ptr2++;
    printf("The value of ptr is %u\n", ptr2);
    return 0;
}