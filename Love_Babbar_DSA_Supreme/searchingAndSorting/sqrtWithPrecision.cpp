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


  int precision;
  cout<<"Enter the precision upto u want the result: "<<endl;
  cin>>precision;
  
  double step = 0.1;
  double finalAns = result;
  
  for(int i=0; i<precision; i++){
    for(double j=finalAns;j*j <= n; j = j + step){
      finalAns=j;
    }
    step = step/10;
  }
  cout<<"Final ans with precision is: "<<finalAns<<endl;

  return 0;
}