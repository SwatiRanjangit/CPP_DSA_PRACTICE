#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int start,int end,int key){
  
  while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid]==key){
      return mid;
    }else if(arr[mid]<key){
      start = mid + 1;
     
     
    }else{
      end = mid-1;
    }
  }
  return -1;
}
int main() {
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int size = 10;
  int end = size-1;

  int res = binarySearch(arr,10,0,end,13);
  //STL: for array binary_search(arr, arr+ size (size pf arrar), key); use this include #include<algorithm>
  //STL for vector binary_search(vector.begin(), vector.end(),key)
      cout<<"found"<<endl;
  }else{
     cout<<"not found"<<endl;
  }
 
}