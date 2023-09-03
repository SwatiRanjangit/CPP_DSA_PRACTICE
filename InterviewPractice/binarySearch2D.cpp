#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<vector<int>>& arr, int row, int col, int k) {
    int left = 0;
    int right = row * col - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midVal = arr[mid / col][mid % col];

        if (midVal == k) {
            return mid; // Element found
        } else if (midVal < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Element not found
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the element you want to search for: ";
    cin >> target;

    int res = binarySearch(arr, m, n, target);
    if (res != -1) {
        cout << "Element " << target << " found at position " << res / n << ", " << res % n << endl;
    } else {
        cout << "Element " << target << " not found" << endl;
    }

    return 0;
}