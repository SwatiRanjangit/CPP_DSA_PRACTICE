/*

APPROACH: Sieve of Eratosthenes
Time complexity is: O(n * log(log n))

step1:  mark all number from 0 to n prime=true
step2: then pick a number and then make all the number which comes in the counting table of that number false
step 3: and then loop until number and then return the count of number which left marked true


*/
#include <iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    if(n==0) return 0;
    vector<bool> prime(n,true);
    prime[0]=prime[1]=false;
    int ans=0;
    
    for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;
            
            int j= 2*i;
            while(j<n){
                prime[j]=false;
                j=j+i;
            }
        }
    }
    return ans;
    
}
int main() {
   int n;
   cout<<"Enter the number upto which you want to count prime numbers: "<<endl;
   cin>>n;
   int ans=countPrime(n);
   cout<<"Count of prime numbers between the given number is: "<<ans<<endl;
   
    return 0;
}