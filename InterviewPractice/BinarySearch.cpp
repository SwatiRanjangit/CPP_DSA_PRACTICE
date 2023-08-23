#include <iostream>
using namespace std;

int BinarySearch(int arr[], int s, int e, int k) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] > k) {
            e = mid - 1;  // Adjusted this line
        } else {
            s = mid + 1;  // Adjusted this line
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    int s = 0;
    int e = n - 1;  // Changed the initial value of 'e'
    
    int key = 25;    // The key you want to search for
    int res = BinarySearch(arr, s, e, key);
    
    if (res != -1) {
        cout << "Found at index " << res << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
