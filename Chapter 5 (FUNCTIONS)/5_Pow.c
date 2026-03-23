#include <stdio.h>
#include <math.h>
int main(){
    int side ;
    printf("Enter the length of side of square ");
    scanf("%d",&side);
    printf("The area is %.1f", pow( side , 2));
    return 0;
}