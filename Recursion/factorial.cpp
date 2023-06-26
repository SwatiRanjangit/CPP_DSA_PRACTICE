#include<iostream>
#include<vector>
using namespace std;

int factorial(int n){
    if(n == 1)
      return 1;
    
    cout<<n<<endl;
    // int smallOutput = factorial(n-1);
    return n * factorial(n-1);
}

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int result = factorial(n);
    cout<<"factorial is: "<<result<<endl;
    return 0;
}