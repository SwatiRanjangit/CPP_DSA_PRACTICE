#include <iostream>
#include<vector>
using namespace std;

int climbStairsProblem(int n){
  if(n==0 || n==1){
    return 1;
  }
 
  int ans = climbStairsProblem(n-1) + climbStairsProblem(n-2);
  return ans;
}

int main() {
  int n;
  cin>>n;
  int ans = climbStairsProblem(n);
  cout<<ans<<endl;

  return 0;
}