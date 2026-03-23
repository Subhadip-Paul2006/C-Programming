#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int j = 0;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                if (i != j) {
                    swap(arr[i], arr[j]);
                }
                j++;
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of elements of array: ";
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nOutput Of Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    Solution obj;
    obj.pushZerosToEnd(arr);

    cout << "\nOutput Of Modified Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
