// TIME COMPLEXITY: O(log n)
// SPACE COMPLEXITY: O(log n)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool BinarySearch(vector<int>& arr, int s, int e, int key) {
  if (s > e) {
    return false;
  }
  int mid = s + (e - s) / 2;

  if (arr[mid] == key) {
    return true;
  }

//   return (arr[mid] < key) ?  BinarySearch(arr, mid + 1, e, key) :
//      BinarySearch(arr, s, mid - 1, key);  

  if (arr[mid] < key) {
    return BinarySearch(arr, mid + 1, e, key);  // Pass 'key' here
  } else {
    return BinarySearch(arr, s, mid - 1, key);  // Pass 'key' here
  }
}

int main() {
  vector<int> arr{1, 3, 4, 5, 20};
  int n = arr.size();
  int s = 0;
  int e = n - 1;
  int key = 13;

  bool ans = BinarySearch(arr, s, e, key);
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
