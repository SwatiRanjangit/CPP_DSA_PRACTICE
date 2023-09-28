#include <iostream>
using namespace std;
int pivotElement(int arr[],int n){
  int s =0;
  int e=n-1;
  while(s<e){
    int mid = s+(e-s)/2;
    if(arr[mid]>=arr[0]){
      s = mid +1;
    }else{
      e=mid;
    }
  }
  return s;
}

int binarySearch(int arr[],int s,int e,int key){
 
  while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
      return mid;
    }else if(arr[mid]<key){
      s = mid +1;
    }else{
      e=mid-1;
    }
  }
  return -1;
}


int searchInSortedRoatated(int arr[],int n,int key){
  int pivot = pivotElement(arr,n);
  if(key >= arr[pivot] && key<=arr[n-1]){
    return binarySearch(arr,pivot,n-1,key);
  }else{
    return binarySearch(arr,0,pivot-1,key);
  }
 }

int main() {
  
  int arr[]={6,7,1,2,3};
  int size =5;
  int res = searchInSortedRoatated(arr,size,3);
  if(res !=-1){
    cout<<"element found "<<res<<endl;
  }else{
    cout<<"not found "<<res<<endl;
  }
  return 0;
}s