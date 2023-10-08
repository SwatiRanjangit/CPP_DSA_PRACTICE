#include <iostream>
#include<vector>
#include<climits>>
#include<algorithm>
using namespace std;

 int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        

        // convert hours:minutes to minutes (string to interget)
        for(int i=0; i<timePoints.size();i++){
            string curr = timePoints[i];
            int hour = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            int totalMin = hour * 60 + min;

            minutes.push_back(totalMin);
        }


        //sort the minutes so that to find  diffrence
        sort(minutes.begin(), minutes.end());
        int mini = INT_MAX;
        int n = minutes.size();
        for (int i = 0; i < n - 1; i++) {
            int diff = minutes[i + 1] - minutes[i];
            // comparing if the difference is minimum than min value
            mini = min(mini, diff);
        }
       
       
       // comparing last digit to 1st digit of the array 
       int lastDiff = (minutes[0] + 1440)-minutes[n-1];
       mini= min(mini,lastDiff);

        return mini;

}

int main() {
  // vector<string> s{"00:00","23:59","00:00"};
  vector<string> s{"23:59","00:00"};
  int ans = findMinDifference(s);
 cout<<"Minimum diff is: "<<ans<<endl;
  return 0;
}