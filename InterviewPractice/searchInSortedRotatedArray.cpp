// Online C++ compiler to run C++ program online
//{ 5, 6, 1, 2, 3, 4 }
// APPROACH IS
// STEP1: find pivot element as if arr[mid] > arr[mid+1] return mid and if arr[mid] > arr[mid-1] then mid-1
//ste2: apply binary search on the part where key value is suitable for
// TC: O(lon n)

#include <iostream>
using namespace std;

int binarySearch(int arr[],int l,int h,int key){
   if(h < l) return -1;
   int mid = l+(h-l)/2;
   
   if(key == arr[mid]) return mid;
   if(key > arr[mid]){
       return binarySearch(arr,mid+1,h,key);
   }else{
       return binarySearch(arr,l,mid-1,key);
   }
}

int findPivot(int arr[],int l,int h){
    if(h < l) return -1;
    if(h==l) return l;
    
    int mid = l+(h-l)/2;
    if(mid > l && arr[mid]<arr[mid-1] ){
        return mid-1;
    }
    if(mid < h && arr[mid] > arr[mid+1]){
        return mid;
    }
    if(arr[l] >= arr[h]){
        return findPivot(arr,l,mid-1);
    }else{
        return findPivot(arr,mid+1,h);
    }
}

int pivotedBinarySearch(int arr[],int n,int key){
    int pivot = findPivot(arr,0,n-1);
    
    if(pivot == -1){
        return binarySearch(arr,0,n-1,key);
    }
    
    if(arr[pivot]==key){
        return pivot;
    }
    
    if(arr[0]<= key){
        return binarySearch(arr,0,pivot-1,key);
    }else{
        return binarySearch(arr,pivot+1,n-1,key);
    }
}

int main() {
   int arr1[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int key = 7;
 
    cout << "Index of the element is : "
         << pivotedBinarySearch(arr1, n, key);

    return 0;
}