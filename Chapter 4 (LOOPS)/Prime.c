#include <stdio.h>

int main() {
    int n, prime = 1;  // Assume the number is prime
    printf("Enter a number to check: ");
    scanf("%d", &n);

    if (n <= 1) {
        prime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0; // Not prime
                break; // No need to check further
            }
        }
    }

    if (prime == 1) {
        printf("\nPrime number\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
