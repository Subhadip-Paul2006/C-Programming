#include <iostream>
using namespace std;

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

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int first = first_large(arr, n);
    int second = sec_large(arr, n, first);

    cout << "First Largest: " << first << endl;
    cout << "Second Largest: " << second << endl;

    return 0;
}
