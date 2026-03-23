#include <stdio.h>

int main()
{
    int salary;
    int tax;
    printf("Enter Your Salary in Per Annum: ");
    scanf("%d", &salary);
    if (salary < 250000)
    {
        printf("Your Salary is %d which less than Rps 2,50,000 thats why you hav to pay no tax", salary);
    }
    else if (salary >= 250000 && salary < 500000)
    {
        tax = (salary / 100) * 5;
        printf("You have to pay Rps %d as your tax which is 5 percent of your salary Rps %d.", tax, salary);
    }
    else if (salary >= 500000 && salary < 1000000)
    {
        tax = (salary / 100) * 20;
        printf("You have to pay Rps %d as your tax which is 20 percent of your salary Rps %d.", tax, salary);
    }
    else if (salary >= 1000000)
    {
        tax = (salary / 100) * 30;
        printf("You have to pay Rps %d as your tax which is 30 percent of your salary Rps %d.", tax, salary);
    }
    return 0;
}