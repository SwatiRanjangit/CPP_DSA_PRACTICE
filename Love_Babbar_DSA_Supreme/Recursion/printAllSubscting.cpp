/*

1 
1 2 
1 2 3 
1 2 3 4 
2 
2 3 
2 3 4 
3 
3 4 
4 


TC: O(n2)
*/

#include <iostream>
#include <vector>
using namespace std;

void printSubstring_util(vector<int>& arr, int s, int e){
  // base case
   if(e >= arr.size()){
       return;
   }

  // 1 case 
  for(int i=s; i<=e;i++){
   cout<<arr[i]<<" ";
  }
  
  cout<<endl; 
  printSubstring_util(arr,s,e+1);
}

void printSubstring(vector<int>arr){
    for(int start=0; start<arr.size();start++){
        int end = start;
        printSubstring_util(arr,start,end);
    }
}

int main() {
  vector<int>nums{1,2,3,4};
  int e= nums.size()-1;
  printSubstring(nums);
  return 0;
}
