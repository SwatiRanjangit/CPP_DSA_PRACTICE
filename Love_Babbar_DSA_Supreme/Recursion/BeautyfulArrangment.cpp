#include <iostream>
#include <vector>

using namespace std;

void countArrangement_helper(int& n, vector<int>& v, int& ans, int currInd) {
    // Base case
    if (currInd == n + 1) {
        ++ans;
        return;
    }

    // One case
    for (int i = 1; i <= n; ++i) {
        if (v[i] == 0 && (currInd % i == 0 || i % currInd == 0)) {
            v[i] = currInd;
            countArrangement_helper(n, v, ans, currInd + 1);
            v[i] = 0; // Backtracking
        }
    }
}

int countArrangement(int n) {
    vector<int> v(n + 1);
    int ans = 0;
    countArrangement_helper(n, v, ans, 1);
    return ans;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arrangements = countArrangement(n);
    cout << "Number of beautiful arrangements for n = " << n << " is: " << arrangements << endl;

    return 0;
}
