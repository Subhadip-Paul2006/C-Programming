#include <stdio.h>

int main()
{
    int n, i, position;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\n");
    
    int arr[n], arr2[n];
    
    // Input the elements of the array
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input the position for rotation
    printf("Enter position (0 to %d): ", n - 1);
    scanf("%d", &position);

    // Validate position
    if (position < 0 || position >= n) {
        printf("Invalid position! Must be between 0 and %d.\n", n - 1);
        return 1;
    }

    // Rearrange the array
    int index = 0;

    // Copy elements from position+1 to the end of the array
    for (i = position + 1; i < n; i++) {
        arr2[index++] = arr[i];
    }

    
    for (i = 0; i <= position; i++) {
        arr2[index++] = arr[i];
    }

    printf("Rearranged array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
