#include <stdio.h>

int first_large(int arr[], int len) {
    int i, largest = arr[0];
    for (i = 1; i < len; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int sec_large(int arr[], int len, int first) {
    int i, second_largest = -1;
    for (i = 0; i < len; i++) {
        if (arr[i] != first && (second_largest == -1 || arr[i] > second_largest)) {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main() {
    int n, i, first, second;
    
    printf("Enter the number of elements of array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    first = first_large(arr, n);
    second = sec_large(arr, n, first);

    printf("Second Largest: %d\n", second);
    
    return 0;
}
