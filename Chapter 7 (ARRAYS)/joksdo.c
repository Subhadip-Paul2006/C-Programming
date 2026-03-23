// accept a 10 dig no check it is isbm no. or not [1,2,3,4,5,6,7,8,9,10]1*1 + 2*2 + 3*3 + 4*4 + 5*5 + 6*6 + 7*7
#include <stdio.h>

void main(){
    int n,s,arr[10],a=10,i=0,num,sum=0;
    printf("Enter The ISBN ");
    scanf("%ld",&n);
    while (n != 0)
    {
        s=s%10;
        arr[a]=s;
        a--;
        n=n/10;
    }
    for ( i = 0; i < 10; i++)
    {
        printf(" %d ",arr[i]);
    }
    for ( i = 1; i < n; i++)
    {
        num=arr[i] * (i + 1);
        sum+=num;
    }
    if (sum % 11 == 0)
    {
        printf("The Number Is ISBN Number %d ",n);
    }else{
        printf("The Number Is-Not ISBN Number");
    }
}