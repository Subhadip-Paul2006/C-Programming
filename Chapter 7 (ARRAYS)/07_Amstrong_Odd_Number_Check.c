#include <stdio.h>
#include <math.h>

int amstrong_number(int n);
void display_array(int size, int arr[]);
void modified_array(int size, int arr[]);

int amstrong_number(int num) {
    int original = num;
    int sum = 0, digit, n = 0;
    int temp = num;

    while (temp != 0) {
        n++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    return sum == original;
}

void display_array(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void modified_array(int size, int arr[]) {
    int arr2[size];
    for (int i = 0; i < size; i++) {
        if (amstrong_number(arr[i])) {
            arr2[i] = arr[i] + 1;
        } else {
            arr2[i] = arr[i];
        }
    }

    printf("Modified Array:\n");
    display_array(size, arr2);
}


int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Position %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array:\n");
    display_array(size, arr);

    modified_array(size, arr);

    return 0;
}