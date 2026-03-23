#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    printf("\nValue of A Inside Function is %d", a);
    printf("\nThe Value Of B Inside Function is %d", b);
    temp = a;
    a = b;
    b = temp;
    printf("\nValue of A Outside Function is %d", a);
    printf("\nThe Value Of B Outside Function is %d", b);
}
int main()
{
    int a = 3, b = 6;
    swap(a, b);
    // printf("\nValue of A Inside Function is %d",a);
    // printf("\nThe Value Of B Inside Function is %d",b);
    return 0;
}