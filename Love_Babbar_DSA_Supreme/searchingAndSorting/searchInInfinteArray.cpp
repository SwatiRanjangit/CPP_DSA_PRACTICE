
/*
exponential search is essential when the array length is infinite and not known 
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



int exponetialSearch(int arr[],int key){
  if(arr[0]==key) return 0;
  int i=0;
  int j=1;
  while(arr[j]<key){
    i=j;
    j = j * 2;
  }

  int ans = BinarySearch(arr,i,j,key);
  return ans;
}

int main() {
  int arr[]={2,3,4,5,6,7,8,9,10,11,12};
  int result = exponetialSearch(arr,6);
  if(result != -1){
    cout<<"element found at: "<<result<<endl;
  }else{
    cout<<"not found"<<endl;
  }

  return 0;
}