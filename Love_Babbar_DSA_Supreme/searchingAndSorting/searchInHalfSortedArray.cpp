#include <iostream>
#include<vector>
using namespace std;

int searchInHalfSorted(vector<int>arr,int size,int key){ // time complexity: O(log n)
  int s=0;
  int e=size-1;
  while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
      return mid;
    }else if(mid-1>=0 && arr[mid-1]==key){
      return mid-1;
    }else if(mid+1<size && arr[mid+1]==key){
      return mid+1;
    }else if(arr[mid]<key){
      s = mid +2;
    }else{
      e = mid -2;
    }
  }
  return -1;
}
int main() {
  vector<int> arr{10,3,40,20,50,80,70};
  int size = 7;
  int res = searchInHalfSorted(arr,size,3);
  if(res != -1){
    cout<<"element found at: "<<res<<endl;
  }else{
    cout<<"not found"<<endl;
  }
  return 0;
}