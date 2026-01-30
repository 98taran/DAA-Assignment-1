#include <iostream>
using namespace std;

void mergeArray(int arr[], int start, int mid, int end) {
    int lft = start;
    int rt = mid + 1;
    int index = 0;

    int temp[end - start + 1];

    while (lft <= mid && rt <= end) {
        if (arr[lft] < arr[rt]) {
            temp[index++] = arr[lft++];
        } else {
            temp[index++] = arr[rt++];
        }
    }
    while (lft <= mid) {
        temp[index++] = arr[lft++];
    }

    while (rt <= end) {
        temp[index++] = arr[rt++];
    }
    for (int i = 0; i < index; i++) {
        arr[start + i] = temp[i];
    }
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        mergeArray(arr, start, mid, end);
    }
}

int main() {
    int arr[7] = {38, 27, 43, 3, 9, 82, 10};
    int size = 7;

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
