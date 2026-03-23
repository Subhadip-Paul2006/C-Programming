#include <stdio.h>

int main() {
    int n, count = 1;
    printf("Enter the no. of lines: ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 0; i < n; i++){
        // Print leading spaces
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for(int k = 0; k < count; k++) {
            printf("*");
        }

        count += 2; 
        printf("\n");
    }
    
    return 0;
}
