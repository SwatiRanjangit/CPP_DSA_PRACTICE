/*

BEST WAY TO MAKE SIEVE FOR COUNT PRIME
TC: O(n log(log(n)));
*/

#include <iostream>
#include<vector>
using namespace std;
vector<bool> Prime(int n){
  vector<bool> prime(n+1,true);
  prime[0]=prime[1]=false;

  for(int i=2;i*i<=n;i++){
   if(prime[i]==true){
     int j=i*i;
    while(j<=n){
      prime[j]=false;
      j=j+i;
    }
   }
  }
  return prime;
}

int main() {
  vector<bool>prime=Prime(25);
  for(int i=0;i<=25;i++){
    if(prime[i]){
      cout<<i<<" ";
    }
  }

  return 0;
}