// Online C++ compiler to run C++ program online
//BRUTE FORCE STEP
//1. sort them 
//2. compare them and store only those which is not overlapping
// for ex: 1st interval is {2,4} and 2nd interval is {3,6} then compare the 1st elemnt of 2nd interval with last element of 1st interval
// and if it is lesser means it is overlapping so we will not store that interval and overlap and store {2,6} that is 6 is maximum of 1st last elemnt of interval and 2nd interval.
// TC: O(2 n)+O(n log n)
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> >merge(vector<vector<int>> arr){
    int n= arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int> >ans;
    for(int i=0;i<n;i++){
        int start=arr[i][0];
        int end=arr[i][1];
        if(!ans.empty() && end <= ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j][0]<=end){
                end = max(arr[j][1],end);
            }else{
                break;
            }
        }
        ans.push_back({start,end});
    }
    return ans;
    
}

int main() {
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> result = merge(arr);

    // Printing the merged intervals
    // for (const auto &interval : result) {
    //     cout << "[" << interval[0] << ", " << interval[1] << "] ";
    // }
    
    for(auto arr : result){
        cout<<"["<<arr[0]<<", "<<arr[1]<<"]";
    }


    return 0;
}


// OTPIMIZED APPROACH

// Online C++ compiler to run C++ program online
//TC: O(nlogn)+o(n)
// here we are iterating over 1 go 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> >merge(vector<vector<int>> arr){
    int n= arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int> >ans;
    for(int i=0;i<n;i++){
       if(ans.empty() || ans.back()[1] < arr[i][0]){
           ans.push_back(arr[i]);
       }else{
           ans.back()[1]=max(ans.back()[1],arr[i][1]);
       }
    }
    return ans;
    
}

int main() {
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> result = merge(arr);

    // Printing the merged intervals
    // for (const auto &interval : result) {
    //     cout << "[" << interval[0] << ", " << interval[1] << "] ";
    // }
    
    for(auto arr : result){
        cout<<"["<<arr[0]<<", "<<arr[1]<<"]";
    }


    return 0;
}