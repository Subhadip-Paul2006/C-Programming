#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char octal[100];
    int decimal = 0;
    int i = 0;

    printf("Enter an octal number: ");
    scanf("%s", octal);

    int len = strlen(octal);
    for (i = 0; i < len; i++) {
        if (octal[i] < '0' || octal[i] > '7') {
            printf("Error: Invalid octal digit '%c'\n", octal[i]);
            return 0;
        }
        decimal += (octal[i] - '0') * pow(8, len - i - 1);
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
