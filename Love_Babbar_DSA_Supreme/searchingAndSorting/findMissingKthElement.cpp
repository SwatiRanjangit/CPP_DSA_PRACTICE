#include <iostream>
using namespace std;



int kthMissingNumber(int arr[], int n, int start, int end) {
  while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid] != mid+1){
      end = mid-1;
    }else{
      start = mid+1;
    }
  }
  return start+1;

}

int main() {
  int arr[10] = {1, 2, 3, 4, 6, 7, 8, 9, 10,11};
  int size = 10;
  int end = size - 1;
  int res = kthMissingNumber(arr, size, 0, end);
  if (res != 0) {
    cout << "Kth missing number found is: " << res << endl;
  } else {
    cout << "no element is missing" << endl;
  }
}
