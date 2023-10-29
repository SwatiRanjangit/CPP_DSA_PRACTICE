// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;


int mincostTickets_helper(vector<int>& days, vector<int>& costs, int i){
    //base case
    if(i >=days.size()) return 0;

    //case for 1 ticket
    int  cost1 = costs[0] + mincostTickets_helper(days,costs, i+1);

    // case for 7 day pass
    int endDay = days[i]+7-1;
    int j=i;
    while( j<days.size() &&days[j] <= endDay){
       j++;
    }
     int cost7 = costs[1] + mincostTickets_helper(days,costs,j);

     //case for 30 days
     endDay = days[i]+30-1;
     j=i;
     while(j<days.size() &&days[j] <= endDay){

         j++;
     }
    int cost30 = costs[2]+ mincostTickets_helper(days,costs,j);

     return min(cost1, min(cost7,cost30));
}

int mincostTickets(vector<int>& days, vector<int>& costs) {
        return mincostTickets_helper(days,costs,0);
}

int main() {
    vector<int> days{1,4,6,7,8,20}; 
    vector<int>costs{2,7,15};
    
    int res = mincostTickets(days,costs);
    cout<<"Result is: "<<res<<endl;

    return 0;
}