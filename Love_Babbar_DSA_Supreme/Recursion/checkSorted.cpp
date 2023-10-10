#include <iostream>
#include<vector>
#include<climits>
using namespace std;


bool isSortedArray(vector<int>& arr,int& n,int i){
  if(i==n-1){
    return true;
  }
  
  if(arr[i+1]>=arr[i]){
    return isSortedArray(arr,n,i+1);
  }else{
      return false;
  }

  
   
}

int main() {
 vector<int>arr{1,20,3,4,5};
 int n= arr.size();
 int i=0;
 bool ans = isSortedArray(arr,n,i);
 if(ans){
  cout<<"yes"<<endl;
 }else{
  cout<<"No"<<endl;
 }
 return 0;
}