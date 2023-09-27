#include <iostream>
using namespace std;
int firstOccurence(int arr[],int n,int start,int end,int key){
  int ans = -1;
  while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid]==key){
      ans = mid;
      end = mid -1;
    }else if(key> arr[mid]){
      start = mid + 1;
    }else if(key < arr[mid]){
      end = mid -1;
    }
  }
  return ans;
}
int main() {
  int arr[10]={1,2,3,4,5,5,5,5,9,10};
  int size = 10;
  int end = size-1;
  int res = firstOccurence(arr,10,0,end,2);
  if(res != -1){
      cout<<"found at: "<<res<<endl;
  }else{
     cout<<"not found"<<endl;
  }
 
}