/*
-1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 
-1 -1 -1 -1 -1 

*/

#include <iostream>
#include<vector>
using namespace std;

int main() {
  int row=3;
  int col=5;
 vector<vector<int> >arr(row, vector<int>(col,-1));
  // to find size of the rows in 2D matrix vector is arr.size()
  for(int i=0;i<arr.size();i++){
    // to find size of the column in 2D matrix vector if number of columns is same  is arr[0].size()  and if number of columns is diffrent then use arr[i].size();
    for(int j=0;j<arr[0].size();j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}