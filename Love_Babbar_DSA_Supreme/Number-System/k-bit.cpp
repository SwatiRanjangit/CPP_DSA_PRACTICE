/*
Enter number: 
10
Enter kth bit: 
2
After setting kth bit of the number: 14


*/

#include <iostream>
using namespace std;

int main() {
  int n, k;
  cout << "Enter number: " << endl;
  cin >> n;
  cout << "Enter kth bit: " << endl;
  cin >> k;
  int mask = 1 << k; // Create a mask with the kth bit set to 1.
  int ans = n | mask; // Perform bitwise OR to set the kth bit.
  cout << "After setting kth bit of the number: " << ans << endl;
  return 0;
}
