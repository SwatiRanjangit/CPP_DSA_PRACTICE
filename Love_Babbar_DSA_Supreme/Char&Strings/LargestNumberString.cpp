// OUTPUT: 9 5 3 4 3 3 0 
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
static bool myComp(string a , string b){
      string t1 = a+b;
      string t2= b+a;

      return t1>t2;
  }
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
// converting all number to string
        for(auto st: nums){
            snums.push_back(to_string(st));
        }

        //sorting according to custom comparator
        sort(snums.begin(),snums.end(),myComp);

       // edge case for if there is only 0 in the array then outpur should be 0 that is greater.
        if(snums[0]=="0") return "0";
        string ans="";
        for(auto str: snums){
          ans+=str;
        }

        return ans;
    }
int main() {
   vector<int> num{3,30,34,5,9};
   
  string ans = largestNumber(num);
  for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
  }
   return 0;
}