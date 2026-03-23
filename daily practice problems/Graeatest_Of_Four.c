#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d)
{
    int max = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }

    return max;
}

int main()
{
    int a, b, c, d;
    printf("\nEnter 1st Number: ");
    scanf("%d", &a);
    printf("\nEnter 2nd Number: ");
    scanf("%d", &b);
    printf("\nEnter 3rd Number: ");
    scanf("%d", &c);
    printf("\nEnter 4th Number: ");
    scanf("%d", &d);

    int result = max_of_four(a, b, c, d);
    printf("The greatest number is: %d\n", result);

    return 0;
}
