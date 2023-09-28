#include <iostream>

using namespace std;

int DivisionByBinarySearch(int divisor, int dividend) {
  int s = 0;
  int e = dividend;
  int ans = -1;
  while (s <= e) {
    int mid = s + (e - s) / 2;

    if (mid * divisor == dividend) {
      return mid;
    } else if (mid * divisor > dividend) {
      e = mid - 1;
    } else {
      ans = mid;
      s = mid + 1;
    }
  }
  return ans;
}

int main() {
  int divisor, dividend;
  cin >> divisor >> dividend;

  int res = DivisionByBinarySearch(divisor, dividend);
  cout << res << endl;

  return 0;
}
