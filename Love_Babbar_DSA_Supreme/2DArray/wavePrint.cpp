#include <iostream>
#include<vector>
using namespace std;

void waveprint(vector<vector<int> > arr){
  int row=arr.size();
  int col = arr[0].size();

  for(int startCol=0;startCol<row;startCol++){
    //even number of col: top to bottom
    if((startCol & 1) == 0){
      for(int i=0;i<col;i++){
        cout<<arr[i][startCol]<<" ";
      }
    }else{
      for(int i=col-1;i>=0;i--){
        cout<<arr[i][startCol]<<" ";
      }
    }
  }
}
int main() {
  vector<vector<int> > arr{
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

  waveprint(arr);
  
  
}