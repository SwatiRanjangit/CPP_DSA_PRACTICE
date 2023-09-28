/*
PROGRAM TO FIND THE ODD OCCURING NUMBER IN ARRAY WHERE CONDITION IS:
1. each element present iin pair
2. no element is present more than a pair like consicutive 3 same number can't be there.

output: found at index: 4
number is: 3

*/

#include <iostream>
#include<vector>
using namespace std;

int singleOccuringNumber(vector<int>arr, int size) {
  int s = 0;
  int e = size -1;

  while (s <= e) {
    if(s==e){
      return s;
    }
    
    int mid = s + (e - s) / 2;
    if(mid % 2==0){
      if(arr[mid]==arr[mid+1]){
        s= mid+2;
      }else{
        e=mid;
      }
    }else{
      if(arr[mid]==arr[mid-1]){
        s= mid +1;
      }else{
        e=mid-1;
      }
    }
  }
 return -1;
}

int main() {
  vector<int> arr{1,1,2,2,3,4,4,3,3,2,5,5};
  int size = arr.size();

  int res = singleOccuringNumber(arr,size);
  cout <<"found at index: "<< res << endl;
  cout<<"number is: "<<arr[res]<<endl;



  return 0;
}
