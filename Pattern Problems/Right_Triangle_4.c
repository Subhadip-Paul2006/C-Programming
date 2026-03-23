#include <stdio.h>

int main(){
    int n ;
    // clrscr();
    printf("Enter the no. of lines");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}