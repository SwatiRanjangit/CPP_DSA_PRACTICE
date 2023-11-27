// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> findNonOverlappingIntervals(vector<vector<int>>& intervals){
    vector<vector<int> >result;
    if(intervals.empty()){
        // cout<<"empty"<<end;
        return result;
        
    }
    
    // sort the intervals;
    sort(intervals.begin(),intervals.end());
    
    // push 1st element to result so to compare with another one
    // result.push_back(intervals[0]);
    
    //check other if the intervals 1st element is lesser than the 2nd element of former interval that is present in result vector then that is overlappping so we will skip it if not then push it to the result vector
    for(int i=1;i<intervals.size();i++){ 
        if (intervals[i][0] > intervals[i-1][1]) {
        // Non-overlapping interval found, add it to the result
        result.push_back({intervals[i - 1][1], intervals[i][0]});
    }else{
         // if there is overlap skip it  3,5
          intervals[i][0] = intervals[i - 1][1];
    }
       
    }
    return result;
}
int main() {
    // vector<vector<int>> intervals = {
    //     {1, 3},
    //     {2, 4},
    //     {3, 6},
    //     {8, 10}
    // };
    
    vector<vector<int> > intervals =  { {1, 3}, {2, 4}, {3, 5}, {7, 9} } ;

    // Find non-overlapping intervals
    vector<vector<int>> nonOverlappingIntervals = findNonOverlappingIntervals(intervals);

    // Display the result
    cout << "Non-overlapping intervals: ";
    for (const vector<int>& interval : nonOverlappingIntervals) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

   
    return 0;
}