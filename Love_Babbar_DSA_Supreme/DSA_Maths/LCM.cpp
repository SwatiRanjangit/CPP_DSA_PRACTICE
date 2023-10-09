// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int gcd(int A, int B) 
	{ 
	    // code here
	    if(A ==0) return B;
	    if(B == 0) return A;
	    while(A > 0 && B > 0){
	        if(A > B){
	            A = A-B;
	        }else{
	            B = B-A;
	        }
	    }
	    return A == 0 ? B : A;
	      
} 

int Lcm(int a,int b){
    int res=gcd(a,b);
    int lcm = (a * b)/res;
    
    return lcm;
}
int main() {
   int n,m;
   cout<<"Enter the two number : "<<endl;
   cin>>n>>m;
   int ans=Lcm(n,m);
   cout<<"LCM of the numbers is: "<<ans<<endl;
   
    return 0;
}