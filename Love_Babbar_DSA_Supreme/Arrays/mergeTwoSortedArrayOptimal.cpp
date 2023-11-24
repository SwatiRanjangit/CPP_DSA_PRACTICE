// merge two sorted array OPTIMAL SOLUTION without using space
#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void merge(int arr[],int n, int brr[],int m){
    int left = n-1;
    int right =0;
    while(left>=0 && right<m){
        if(arr[left]>brr[right]){
            swap(arr[left],brr[right]);
            left--;
            right++;
        }else{
            break;
        }
    }
    sort(arr, arr+n);
    sort(brr,brr+m);
}

int main() {
   int arr[3]={1,5,6};
   int brr[3]={2,3,4};
   merge(arr,3,brr,3);
   for(int i=0;i<3;i++){
     cout<<arr[i]<<" ";
  }
    for(int i=0;i<3;i++){
     cout<<brr[i]<<" ";
  }

    return 0;
}