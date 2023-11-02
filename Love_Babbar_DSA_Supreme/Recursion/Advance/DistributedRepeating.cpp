#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool canDistribute_helper(vector<int>& counts, vector<int>& quantity, int ithCust) {
    // Base case
    if (ithCust == quantity.size()) {
        return true;
    }

    for (int i = 0; i < counts.size(); i++) {
        if (counts[i] >= quantity[ithCust]) {
            counts[i] -= quantity[ithCust];

            if (canDistribute_helper(counts, quantity, ithCust + 1)) {
                return true;
            }
            counts[i] += quantity[ithCust]; // Backtracking
        }
    }
    return false;
}

bool canDistribute(vector<int>& nums, vector<int>& quantity) {
    unordered_map<int, int> countMap;
    for (auto num : nums) {
        countMap[num]++;
    }

    vector<int> counts;
    for (auto it : countMap) {
        counts.push_back(it.second);
    }

    sort(quantity.rbegin(), quantity.rend()); // Sort in descending order
    return canDistribute_helper(counts, quantity, 0);
}

int main() {
    // Example usage
    vector<int> nums = {1, 1, 2, 2, 3, 3};
    vector<int> quantities = {1, 2};

    if (canDistribute(nums, quantities)) {
        cout << "It's possible to distribute quantities to match counts in the array." << endl;
    } else {
        cout << "It's not possible to distribute quantities to match counts in the array." << endl;
    }

    return 0;
}
