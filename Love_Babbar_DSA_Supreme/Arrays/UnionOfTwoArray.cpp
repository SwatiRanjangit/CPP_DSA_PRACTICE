#include <iostream>
#include <vector>
using namespace std;

int main() {
  int arr[]={1,3,5,7,9};
  int size1=5;
  int brr[]={2,4,6,8};
  int size2=4;

  vector<int> big;
  for(int i=0; i< size1;i++){
    big.push_back(arr[i]);
  }

  for(int i=0; i<size2;i++){
    big.push_back(brr[i]);
  }

  for(int i=0;i<big.size();i++){
    cout<<big[i]<<" ";
  }
  
}