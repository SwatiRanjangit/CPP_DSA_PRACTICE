
#include <iostream>
#include<vector>
using namespace std;

int fastExponential(int A, int B) {
    //Time complexity = O(log B)
  int ans=1;
  while(B > 0){
      if(B & 1){
          ans = ans * A;
      }
      A = A * A;
      B>>=1; // similar to b=b/2; right shift
  }
	return ans;      
} 

// int slowExponential(int A, int B) {
//   int ans=1;
//   for(int i=0;i<B;i++){
//       ans = ans * A;
//   }
//   return ans;
	      
// } 


int main() {
   int n,m;
   cout<<"Enter the number and power : "<<endl;
   cin>>n>>m;
   int ans=fastExponential(n,m);
   cout<<"result: "<<ans<<endl;
   
    return 0;
}