#include <iostream>
#include<cmath>
using namespace std;


int decimalToBinary(int n){
  int binarryno=0,i=0;
  
  while(n>0){
    int bit = (n & 1);
  binarryno = bit * pow(10,i++)+binarryno;
  n = n>>1;
  }
 return binarryno;
}
int main() {
 int n;
  cin>>n;
  int res =decimalToBinary(n);
  cout<<res<<endl;
  
 
  return 0;
}