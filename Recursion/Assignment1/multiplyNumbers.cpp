#include<iostream>
#include<vector>
using namespace std;

int mul(int m , int n){
    if( n > m){
        return mul(n, m);
    }

    if(n==0 || m==0)
     return 0;

    return  m + mul(m,n-1);
}

int main(){
  int m,n;
  cin>>m>>n;
  cout<<mul(m,n);
  return 0;
}