#include <stdio.h>
int sum(int);
int sum(int n){
    if (n==1){
        return 1;
    }
    return sum(n-1)+sum(n);
}
int main(){
    int n;
    printf("Enter the no of term ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}