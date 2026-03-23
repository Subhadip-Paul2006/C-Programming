#include <stdio.h>
#include <malloc.h>
void main()
{
    int *a, n, *p, i, num, f = 0;
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
    printf("Enter the numbeer you want to search");
    scanf("%d", &num);
    a = p;

    for (i = 0; i < n; i++) 
    {
        if (*a == num)
        {
            f++;
            break;
        }
        a++;
    }
    if (f == 1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
}