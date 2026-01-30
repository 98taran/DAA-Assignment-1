#include <iostream>
using namespace std;

int binary_srch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;  
    }

    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        return mid;
    }
    else if (key < arr[mid]) {
        return binary_srch(arr, low, mid - 1, key);
    }
    else {
        return binary_srch(arr, mid + 1, high, key);
    }
}

int main() {
    int arr[7] = {2, 4, 6, 9, 13, 17, 20};

    int key = 13;
    int low = 0;
    int high = 6;

    int result = binary_srch(arr, low, high, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
