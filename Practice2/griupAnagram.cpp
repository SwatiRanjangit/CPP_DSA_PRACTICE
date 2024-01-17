#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//TIME COMPLEXITY : O(m+n)

vector<vector<string>> isAnagram(vector<string>& s) {
   map<string,vector<string> > mp;

   for(auto st: s){
    string str=st;
      sort(s.begin(),s.end());
      mp[str].push_back(st);
   }

   vector<vector<string> >ans;
   for(auto it=mp.begin();it!=mp.end();it++){
    ans.push_back(it->second);
   }
   return ans;
 }


int main() {
   vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = isAnagram(input);

    // Displaying the grouped anagrams
    for ( auto& group : result) {
        for ( auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
  
}