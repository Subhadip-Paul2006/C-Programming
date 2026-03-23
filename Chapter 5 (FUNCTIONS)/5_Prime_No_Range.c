#include<stdio.h>
void prime_no(int a, int b)
{
    int prime=1,s,i;
    for (s=a; s <= b; s++)
    {
        if (a <= 1){
            prime = 1;
        } 
        else {

               for ( i = 2; i <= s / 2; i++){
                   if (s % i == 0) {
                         prime = 0; 
                         break; 
                   }
               }
        }

        if (prime == 1) {
            printf("\nPrime number %d\n",s);
        }
    }
}

int main(){
    int a,b;
    printf("Enter the value of start");
    scanf("%d",&a);
    printf("Enter the value of end");
    scanf("%d",&b);
    prime_no(a,b);
    return 0;
}
