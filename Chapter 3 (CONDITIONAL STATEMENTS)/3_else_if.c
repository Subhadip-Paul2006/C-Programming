#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    if (age >= 60)
    {
        printf("\nYou are elegible to vote & You are a senior citizen");
    }
    else if(age > 18){
        printf("\nYou are elegible to vote");
    }
    else
    {
        printf("\nYou are not elegible to vote");
    }
    return 0;
}