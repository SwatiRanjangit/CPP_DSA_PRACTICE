#include <iostream>

using namespace std;

int DivisionByBinarySearch(int divisor, int dividend) {
  int s = 0;
  int e = abs(dividend);
  int ans = -1;
  while (s <= e) {
    int mid = s + (e - s) / 2;

    if (abs(mid * divisor) == abs(dividend)) {
      ans= mid;
      break; 
    } else if (abs(mid * divisor) > abs(dividend)) {
      e = mid - 1;
    } else {
      ans = mid;
      s = mid + 1;
    }
  }
  // condition for diving negative to negative number or positive to poistive or negative and positive:
  
  if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
      return ans;
  }else{
    return -ans;
  }
 
}

int main() {
  int divisor, dividend;
  cin >> divisor >> dividend;

  int res = DivisionByBinarySearch(divisor, dividend);
  cout << res << endl;

  return 0;
}
