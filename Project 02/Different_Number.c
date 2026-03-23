#include <stdio.h>

void fibonacci();
void amstrong();
void prime();
void factorial();
void palindrome();
void strong();
void reverse();

void fibonacci()
{
    int start, end, a, b, next;
    a = 0;
    b = 1;
    next = 0;
    while (next <= end)
    {
        if (next >= start)
        {
            printf("%d ", next);
        }
        a = b;
        b = next;
        next = a + b;
    }
}

void amstrong()
{
    int start, end;
    printf("\nEnter the start number :- ");
    scanf(" %d", &start);
    printf("\nEnter the end number :- ");
    scanf(" %d", &end);
    printf("Armstrong numbers between %d and %d are: ", start, end);

    for (int num = start; num <= end; num++)
    {
        int originalNum = num, sum = 0, digits = 0, temp = num;
        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }
        temp = num;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        if (sum == originalNum)
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}

void prime(int start, int end)
{
    int start, end, prime_no, s, i;
    for (s = start; s <= end; s++)
    {
        prime_no = 1;
        for (i = 2; i <= (s / 2); i++)
        {
            if (s % i == 0)
            {
                prime_no = 0;
                break;
            }
        }
        if (prime_no == 1)
        {
            printf("\nPrime number %d\n", s);
        }
    }
}



void palindrome()
{
    int start, end;
    printf("\nEnter the start number :- ");
    scanf(" %d", &start);
    printf("\nEnter the end number :- ");
    scanf(" %d", &end);
    printf("Palindrome numbers between %d and %d are: ", start, end);

    for (int num = start; num <= end; num++)
    {
        int originalNum = num, reversedNum = 0, temp = num;
        while (temp > 0)
        {
            reversedNum = reversedNum * 10 + (temp % 10);
            temp /= 10;
        }
        if (originalNum == reversedNum)
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}

void main()
{
    int choice;
    printf("(1) -> Fibonacci Series \n(2) -> Amstrong Number \n(3) -> Prime Number \n(4) -> Factorial Number \n(5) -> Palindrome Number \n(6) -> Stong Number \n(1) -> Perfect Number \n");
    printf("Enter your choice :- ");
    scanf(" %d", &choice);
    
}