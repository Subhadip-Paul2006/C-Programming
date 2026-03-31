#include <stdio.h>
#include <stdlib.h>

int first_large(int arr[], int len);
int sec_large(int arr[], int len, int first);

int first_large(int arr[], int len) {
    int max = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int sec_large(int arr[], int len, int first) {
    int second = -1;
    for (int i = 0; i < len; i++) {
        if (arr[i] != first) {
            if (second == -1 || arr[i] > second) {
                second = arr[i];
            }
        }
    }
    return second;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            return 1;
        }
    }

    int first = first_large(arr, n);
    int second = sec_large(arr, n, first);

    printf("First Largest: %d\n", first);
    printf("Second Largest: %d\n", second);

    free(arr);
    return 0;
}
