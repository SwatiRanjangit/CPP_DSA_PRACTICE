/*

print this pattern:

***** *****
****   ****
***     ***
**       **
*         *
*         *
**       **
***     ***
****   ****
***** *****



*/


#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  // for upper part
  for (int row = 0; row < n; row++) {
    // for 1st part of upper part
    for (int col = 0; col < n - row; col++) {
      cout << "*";
    }

    // space full pyramid
    for (int space = 0; space < 2 * row + 1; space++) {
      cout << " ";
    }

    // for 2nd part star pattern
    for (int col = 0; col < n - row; col++) {
      cout << "*";
    }
    cout << endl;
  }

  // lower part of pattern

  for (int row = 0; row < n; row++) {
    // for 1st part of lower part
    for (int col = 0; col < row + 1; col++) {
      cout << "*";
    }

    //for hollow full pyramid
    for(int col=0; col<2*n-2*row-1;col++){
      cout<<" ";
    }


    //2nd part pattern of lower part
    for (int col = 0; col < row + 1; col++) {
      cout << "*";
    }

    
    cout << endl;
  }
}