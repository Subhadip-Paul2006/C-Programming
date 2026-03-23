#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;
    printf("Enter the number up to which the sum is to be counted: ");
    scanf("%d", &n);
    while (i <= n) {
        sum = sum + i;
        printf("%d ", sum); // Adding a space for better readability
        i++;
    }
    return 0;
}
