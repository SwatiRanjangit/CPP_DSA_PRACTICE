#include <iostream>
using namespace std;

int peakElement(int arr[],int n){
  int s=0;
  int e = n-1;
  while(s<=e){
    int mid = s+(e-s)/2;
    if(mid <= e && arr[mid] > arr[mid+1]){
      return mid;
    }
    if(mid-1>=s && arr[mid -1 ]> arr[mid]){
      return mid-1;
    }
    if(arr[s] >arr[mid]){
      e=mid -1;
    }else{
      s=mid+1;
    }
    
  }
  return -1;
}

int main() {
   
  int arr[]={6,7,1,2,3};
  int size =5;
  int res = peakElement(arr,size);
 cout<<"result is: "<<arr[res]<<endl;
  return 0;
}