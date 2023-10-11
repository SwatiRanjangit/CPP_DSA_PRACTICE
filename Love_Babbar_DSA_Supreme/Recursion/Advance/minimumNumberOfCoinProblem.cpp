#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int Solve(vector<int>& arr, int target, int output) {
    // Base case
    if (output == target) {
      return 0;
    }
    if (output > target) {
        return INT_MAX;
    }

    int mini = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
     
        int ans = Solve(arr, target, output + arr[i]);
        
        if (ans != INT_MAX) {
        mini = min(mini, ans + 1);
        }
    }
    return mini;
}

int main() {
    vector<int> arr{1, 2};
    int target = 3;
    int output = 0;
    int ans = Solve(arr, target, output);

    if (ans == INT_MAX) {
        cout << "No valid combination found." << endl;
    } else {
        cout << "Minimum number of elements needed to reach the target: " << ans << endl;
    }
}
