//OPTIMSED APPROACH

// Online C++ compiler to run C++ program online
//{ 5, 6, 1, 2, 3, 4 }
//TC: O(log n)

#include <iostream>
using namespace std;

int findMin(int arr[],int l,int h){
    if(arr[l]<=arr[h]){
        return arr[l];
    }
    
    while(l<=h){
        int mid = l+(h-l);
        if(mid-1 >=0 && arr[mid]<arr[mid-1] ){
            return arr[mid];
        }else if(arr[mid] > arr[h]){
            // must be in right half
            l=mid+1;
        }else{
            //must in left side
            h=mid-1;
        }
    }
    
}
int main() {
   int arr[6]={ -5, -3, -2, -1, -4};
   int n=6;
   int l=0;
   int h=n-1;
   int ans = findMin(arr,l,h);
   cout<<ans<<endl;

    return 0;
}

//BRUTE FORCE
// WE CAN DO IT USING LINEAR SEARCH TC: O(N)