#include <iostream>
#include <vector>
using namespace std;

int main() {
  int arr[]={1,3,5,7,9};
  int size1=5;
  int brr[]={3,4,5,7};
  int size2=4;
  int size = size1+size2;
  vector<int> big;
  for(int i=0; i< size1;i++){
    for(int j=0; j<size2;j++){
      if(arr[i]==brr[j]){
        //for not printing the same value again and again we need to mark it  
        brr[j]=-1;
      big.push_back(arr[i]);
    }
    }
  }

  for(int i=0;i<big.size();i++){
    cout<<big[i]<<" ";
  }
  
}