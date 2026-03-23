#include<stdio.h>
void prime_no(int a, int b)
{
    int prime=1;
    for (a; a < b; a++)
    {
        if (a <= 1) {
            prime = 1;
        } else {
            for (int i = 2; i <= a / 2; i++) {
                if (a % i == 0) {
                    prime = 0; 
                    break; 
                }
            }
        }

        if (prime == 1) {
            printf("\nPrime number %d\n",a);
        }
    }
}

void main(){
    int a,b;
    printf("Enter the value of start");
    scanf("%d",&a);
    printf("Enter the value of end");
    scanf("%d",&b);
    prime_no(a,b);

}