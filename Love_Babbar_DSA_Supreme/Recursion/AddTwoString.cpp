// TC: O(N)
//SC: O(N)

#include <iostream>
#include <algorithm>
using namespace std;

void addRe(string& s1, int p1, string& s2, int p2, string& ans, int carry = 0) {
  if (p1 < 0 && p2 < 0) {
    if (carry != 0) {
      ans.push_back(carry + '0');
    }
    return;
  }

  int n1 = (p1 >= 0 ? s1[p1] : '0') - '0';
  int n2 = (p2 >= 0 ? s2[p2] : '0') - '0';
  int sum = n1 + n2 + carry;
  int digit = sum % 10;
  carry = sum / 10;
  ans.push_back(digit + '0');

  addRe(s1, p1 - 1, s2, p2 - 1, ans, carry);
}

string AddString(string s1, string s2) {
  string ans = "";
  addRe(s1, s1.size() - 1, s2, s2.size() - 1, ans);
  reverse(ans.begin(), ans.end());
  return ans;
}

int main() {
  string num1 = "11", num2 = "123";
  string ans = AddString(num1, num2);
  cout << ans << endl;
  return 0;
}
