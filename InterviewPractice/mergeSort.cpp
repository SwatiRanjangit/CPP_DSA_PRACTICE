#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int l1[n1], l2[n2];
    for (int i = 0; i < n1; i++) {
        l1[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        l2[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (l1[i] <= l2[j]) {  // Fixed: Use l1[i] and l2[j]
            arr[k] = l1[i];
            i++;
        } else {
            arr[k] = l2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = l1[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = l2[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, arrSize - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
