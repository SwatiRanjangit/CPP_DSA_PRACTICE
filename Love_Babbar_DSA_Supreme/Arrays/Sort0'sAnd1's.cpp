/*
0 0 0 0 0 1 1 1 1
*/

#include <iostream>
using namespace std;

int main() {
  int arr[] = {0, 1, 0, 0, 1, 0, 1, 0, 1};
  int size = 9;
  int start = 0;
  int end = size - 1;
  int i=0;
  while(start<end) {
    if (arr[i] == 0) {
      swap(arr[i], arr[start]);
      start++;
      i++;
    } else {
      swap(arr[i], arr[end]);
      end--;
      i++;
    }
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
