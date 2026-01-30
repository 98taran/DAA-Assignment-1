#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int lft = start;
    int rt = end;

    while (lft < rt) {
        do {
            lft++;
        } while (lft < end && arr[lft] <= pivot);

        do {
            rt--;
        } while (arr[rt] > pivot);

        if (lft < rt) {
            swap(arr[lft], arr[rt]);
        }
    }

    swap(arr[start], arr[rt]);
    return rt;
}

void quickSort(int arr[], int start, int end) {
    if (start < end) {
        int pos = partition(arr, start, end);
        quickSort(arr, start, pos);
        quickSort(arr, pos + 1, end);
    }
}

int main() {
    int arr[6] = {2, 9, 7, 5, 12, 10};
    int size = 6;

    quickSort(arr, 0, size);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
