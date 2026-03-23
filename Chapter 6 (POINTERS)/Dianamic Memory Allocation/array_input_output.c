#include <stdio.h>
#include <malloc.h>
void main()
{
    int *a, n, *p, i;
    printf("Enter the number of elements");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    p = a;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &*a);
        a++;
    }
    a = p;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *a);
        a++;
    }
}