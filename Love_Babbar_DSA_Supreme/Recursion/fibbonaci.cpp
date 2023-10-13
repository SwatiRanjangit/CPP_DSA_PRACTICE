// TC: O(2^n)
//SC: O(n)

#include <iostream>
#include<vector>
using namespace std;

int fibbonaci(int n){
  if(n==1){
    return 0;
  }
  if(n==2){
    return 1;
  }
  int ans = fibbonaci(n-1) + fibbonaci(n-2);
  return ans;
}

int main() {
  int n;
  cin>>n;
  int ans = fibbonaci(n);
  cout<<ans<<endl;

  return 0;
}