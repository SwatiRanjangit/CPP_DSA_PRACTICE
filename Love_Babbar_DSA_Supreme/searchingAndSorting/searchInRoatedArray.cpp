#include <iostream>
using namespace std;

int peakElement(vector<int> nums) {
        int s = 0;
        int e = nums.size() - 1;
        while (s <= e) {
            int mid = s+(e-s)/2;
        // case of one element
            if(s==e){
                return s;
            }
            if(mid <=e && nums[mid] > nums[mid+1]){
                return mid;
            }

            if(mid-1 >=s && nums[mid-1] > nums[mid]){
                return mid-1;
            }

            if(nums[s]>nums[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }

    return -1;
        
}

int binarySearch(vector<int> nums, int s, int e, int target) {
        while (s <= e) {  // Change s<e to s<=e
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
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
}