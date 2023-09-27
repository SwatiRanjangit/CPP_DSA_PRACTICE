#include <iostream>
#include<vector>
using namespace std;

int main() {
 vector<vector<int> >arr;
  vector<int>a {1,2,3};
  vector<int>b {4,5,6};
  vector<int>c {7,8,9};
  // pushing elements into vector
  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);
  // to find size of the rows in 2D matrix vector is arr.size()
  for(int i=0;i<arr.size();i++){
    // to find size of the column in 2D matrix vector if number of columns is same  is arr[0].size()  and if number of columns is diffrent then use arr[i].size();
    for(int j=0;j<arr[0].size();j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}