#include <iostream>
using namespace std;

int countUnique(int arr[], int n) {
    if (n <= 1) {
        return n;
    }

    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main() {
    int arr[6] = {1, 1, 2, 2, 3, 4};
    int n = 6;
    int res = countUnique(arr, n);
    cout << res << endl;

    return 0;
}
