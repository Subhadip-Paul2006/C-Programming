#include <stdio.h>

int main() {
    int i, j, n;

    // Size of the square
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    // Loop to print the square pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
