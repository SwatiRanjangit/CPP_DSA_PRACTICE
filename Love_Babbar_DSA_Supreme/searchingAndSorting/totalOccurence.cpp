#include <iostream>
using namespace std;

int lastOccurence(int arr[], int n, int start, int end, int key) {
  int ans = -1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
      ans = mid;
      start = mid + 1;
    } else if (key > arr[mid]) {
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    }
  }
  return ans;
}

int firstOccurence(int arr[], int n, int start, int end, int key) {
  int ans = -1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
      ans = mid;
      end = mid - 1;
    } else if (key > arr[mid]) {
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    }
  }
  return ans;
}

int totalOccurence(int arr[], int n, int start, int end, int key) {
  int res1 = firstOccurence(arr, n, start, end, key);
  int res2 = lastOccurence(arr, n, start, end, key);

  if (res1 != -1 && res2 != -1) {
    int final = res2 - res1 + 1;
    return final;
  } else {
    return 0; // Element not found
  }

}

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 5, 5, 5, 9, 10};
  int size = 10;
  int end = size - 1;
  int res = totalOccurence(arr, size, 0, end, 5);
  if (res != 0) {
    cout << "Total occurence is:  " << res << endl;
  } else {
    cout << "element not found" << endl;
  }
}
