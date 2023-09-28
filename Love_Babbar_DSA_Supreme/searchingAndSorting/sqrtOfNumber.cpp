// without precision value.

#include <iostream>
using namespace std;
int sqrt(int n){
  int target = n;
  int s=0;
  int e=n;
  int ans = -1;
  while(s<e){
    int mid = s+(e-s)/2;

    if(mid * mid == target){
      return mid;
    }else if(mid * mid > target){
      e=mid-1;
    }else{
      ans = mid ;
      s = mid + 1;
    }
  }
  return ans;
}
int main() {
  int n;
  cin>>n;
  int result = sqrt(n);
  cout<<"square root is: "<<result<<endl;

  return 0;
}