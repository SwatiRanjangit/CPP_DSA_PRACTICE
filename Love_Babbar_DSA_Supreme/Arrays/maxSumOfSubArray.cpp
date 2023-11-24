// NEXT PERMUTATION
#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

//brute force
//1. travese through all the subarrays using 3 loops
// 2. with adding the subarrays
//3 . and comparing with the max value which is initially min value



int  maxValue(vector<int> arr){
    int n = arr.size();
    int maxi = INT_MIN;
   for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           int sum =0;
           for(int k=i;k<=j;k++){
               sum+=arr[k];
               maxi = max(sum,maxi);
           }
       }
   }
   return maxi;
}
int main() {
   vector<int> arr{-2,-3,4,-1,-2,1,5,-3};
   int res = maxValue(arr);
   cout<<res<<endl;

    return 0;
}


// 2nd APPROACH o(n2)

// NEXT PERMUTATION
#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;





int  maxValue(vector<int> arr){
    int n = arr.size();
    int maxi = INT_MIN;
   for(int i=0;i<n;i++){
       int sum =0;
       for(int j=i;j<n;j++){
          
               sum+=arr[j];
               maxi = max(sum,maxi);
           
       }
   }
   return maxi;
}
int main() {
   vector<int> arr{-2,-3,4,-1,-2,1,5,-3};
   int res = maxValue(arr);
   cout<<res<<endl;

    return 0;
}


// OPTIMAL APPROACH


// NEXT PERMUTATION
#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

//optimal APPROACH
//So the main Intuition behind Kadane’s Algorithm is, 

//The subarray with negative sum is discarded (by assigning max_ending_here = 0 in code).
//We carry subarray till it gives positive sum.



int  maxValue(vector<int> arr){
    int n = arr.size();
    int maxi = INT_MIN;
    int sum = 0;
   for(int i=0;i<n;i++){
       sum +=arr[i];
       if(sum > 0){
           maxi = max(maxi,sum);
       }
       if(sum < 0){
          sum = 0; 
       }
   }
   return maxi;
}
int main() {
   vector<int> arr{-2,-3,4,-1,-2,1,5,-3};
   int res = maxValue(arr);
   cout<<res<<endl;

    return 0;
}