// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int s,int e){
    
     int mid = s+(e-s)/2;
     // we will create two array
     int len1 = mid-s+1;
     int len2 = e-mid;
     
     //dynamic array creation
     int* left = new int[len1];
     int* right = new int[len2];
     
     //copy values for left array
     int k=s;
     for(int i=0;i<len1;i++){
         left[i] = arr[k];
         k++;
     }
     
     //copy values for right array
      k=mid+1;
      for(int i=0;i<len2;i++){
         right[i] = arr[k];
         k++;
     }
     
     //merge two arrays of left and right array
     
     int leftIndex =0;
     int rightIndex =0;
     int mainIndex = s;
     
     while(leftIndex < len1 && rightIndex <len2){
         if(left[leftIndex] < right[rightIndex]){
             arr[mainIndex++] = left[leftIndex++];
             
         }else{
             arr[mainIndex++] = right[rightIndex++];
             
         }
     }
     
     //copy logic for left array
     while(leftIndex < len1){
         arr[mainIndex++] = left[leftIndex++];
     }
     //copy logic for right arrau
      while(rightIndex <len2){
        arr[mainIndex++] = right[rightIndex++];
     }
     
     // TODO: we can delete newly created two arrays.
     
}


void mergeSort(vector<int>&arr, int s, int e){
    if(s>=e) return;
    
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    
    mergeSort(arr,mid+1,e);
    
    merge(arr,s,e);
    
}

int main() {
    vector<int> arr{4,5,2,3,1,10,8}; 
    int s=0;
    int n=7;
    int e=n-1;
    
   mergeSort(arr,s,e);
   
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    
    
    
   

    return 0;
}