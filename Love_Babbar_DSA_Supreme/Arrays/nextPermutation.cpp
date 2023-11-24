// NEXT PERMUTATION
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

//brute force
//1. generate all permutations in sorted way
// 2. then do linear search to find the array
//3 . then print the next permuattion that is the answer
// 4. time complexity is (N! * N ) very high

// 2nd APPROACH
// we can use stl in c++
// we need to impliment it:

// OPTIMESED
//1. we need to find longest prefix match condition a[i]<a[i+1]
// 2. find something in array that is greater than the a[i] but the smallest one
//3.try to place the others elements in sorted order

vector<int> nextPermutation(vector<int> arr){
    int ind = -1;
    int n= arr.size();
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind = i;
            break;
        }
    }
    
    if(ind == -1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    
    for(int i=n-1;i>ind;i--){
        if(arr[i]>arr[ind]){
            swap(arr[i],arr[ind]);
            break;
        }
    }
    reverse(arr.begin()+ind + 1, arr.end());
    return arr;
}
int main() {
   vector<int> arr{1,3,2};
   vector<int> ans = nextPermutation(arr);
   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }

    return 0;
}