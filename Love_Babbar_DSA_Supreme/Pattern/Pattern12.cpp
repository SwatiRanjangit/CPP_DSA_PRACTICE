/*
1 2 3 4 5 
2     5 
3   5 
4 5 
5 

*/

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  for (int row = 0; row < n; row++) {
    int count =1;
    for (int col = row + 1; col <= n; col++) {
      if(col == row + 1 || col == n || row == 0){
             cout<<col<<" ";
      }else{
        cout<<"  ";
      }

    }
    cout<<endl;
  }
}