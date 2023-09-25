/*
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1

*/


#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  for (int row = 1; row <=n; row++) {
    int c =1;
    for (int col = 1; col <= row; col++) {
     cout<<c<<" ";
      c = c * (row - col)/col;

    }
    cout<<endl;
  }
}