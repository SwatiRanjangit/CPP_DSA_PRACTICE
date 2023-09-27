#include <iostream>
using namespace std;
int lastOccurence(int arr[],int n,int start,int end,int key){
  int ans = -1;
  while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid]==key){
      ans = mid;
      start = mid + 1;
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
  // inbuilt stl: auto ans = upper_bound(vector.begin(),vector.end(),key)
  int res = lastOccurence(arr,10,0,end,5);
  if(res != -1){
      cout<<"found at: "<<res<<endl;
  }else{
     cout<<"not found"<<endl;
  }
 
}