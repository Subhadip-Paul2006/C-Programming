#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    if (age > 17)
    {
        printf("\nYou are elegible to vote");
    }
    else
    {
        printf("\nYou are not elegible to vote");
    }
    return 0;
}