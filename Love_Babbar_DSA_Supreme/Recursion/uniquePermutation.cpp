#include <iostream>
#include <vector>
#include <set>

using namespace std;

void permuteUniqueHelper(vector<int>& nums, vector<vector<int>>& ans, int start) {
    // Base case
    if (start == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[i], nums[start]);
        permuteUniqueHelper(nums, ans, start + 1);
        swap(nums[i], nums[start]);
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;
    permuteUniqueHelper(nums, ans, 0);

    set<vector<int>> st;
    for (auto s : ans) {
        st.insert(s);
    }

    ans.clear();
    for (auto p : st) {
        ans.push_back(p);
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
    vector<int> input = {1, 1, 2};

    vector<vector<int>> result = permuteUnique(input);

    cout << "Unique permutations of the input vector are: " << endl;
    printResult(result);

    return 0;
}
