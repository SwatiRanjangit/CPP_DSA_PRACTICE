#include <iostream>
#include<cmath>
using namespace std;


int BinaryToDecimal(int n){
  int decimal=0,i=0;
  
  while(n>0){
  int bit = n % 10;
  decimal = decimal + bit * pow(2,i++);
  n = n/10;
  }
 return decimal;
}
int main() {
 int n;
  cin>>n;
  int res =BinaryToDecimal(n);
  cout<<res<<endl;
  
 
  return 0;
}