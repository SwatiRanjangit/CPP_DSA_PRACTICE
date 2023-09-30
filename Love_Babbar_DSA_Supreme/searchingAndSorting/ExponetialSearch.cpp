/*
Exponetial search is also done in only sorted array and bigger array size
in this we basically find a short subarray for finding that element in sorted array where we move loop exponentialy by i=i*2
till it will find any element greate than the element to be found ...
Time complexity is: log(2^log m-1)

Application: Search in infinite array (unbounded array)
             better than binary search when key element is in begning

*/



#include <iostream>
using namespace std;
int BinarySearch(int arr[],int s,int e,int key){
  while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
      return mid;
    }else if(arr[mid] < key){
      s = mid +1;
    }else{
      e = mid -1;
    }
  }
  return -1;
}



int exponetialSearch(int arr[],int n,int key){
  if(arr[0]==key) return 0;
  int i=1;
  while(i<n && arr[i]<=key){
    i = i *2;
  }

  int ans = BinarySearch(arr,i/2,min(i,n-1),key);
  return ans;
}

int main() {
  int arr[]={2,3,4,5,6,7,8,9,10,11,12};
  int size = 11;
  int result = exponetialSearch(arr,size,7);
  if(result != -1){
    cout<<"element found"<<endl;
  }else{
    cout<<"not found"<<endl;
  }

  return 0;
}