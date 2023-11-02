// Online C++ compiler to run C++ program online
// unique elements combo
#include <iostream>
#include<vector>
using namespace std;


 void combinationSum_helper(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& v, int index){
   // base case
   if(target == 0){
       ans.push_back(v);
       return;
   }

   if(target < 0){
       return;
   }

   // one case
   for(int i=index ; i<candidates.size(); i++){
       v.push_back(candidates[i]);
       combinationSum_helper(candidates, target - candidates[i], ans, v, i+1);
       v.pop_back();
   }
    }

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        combinationSum_helper(candidates , target, ans, v, 0 );
        set<vector<int> >st;
        for(auto s : ans){
            st.insert(s);
        }

        ans.clear();
        for(auto s : st){
            ans.push_back(s);
        }

        return ans;
}

void printResult(const vector<vector<int>>& result) {
    for (const auto& combination : result) {
        cout << "[ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
}

int main() {
    vector<int>candidates{2,3,6,7};
    int target = 7;
    
    vector<vector<int>> result = combinationSum(candidates, target);
    cout << "Unique combinations that sum up to " << target << " are: " << endl;
    printResult(result);

    

    

    return 0;
}