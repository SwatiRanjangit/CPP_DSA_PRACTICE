#include<iostream>
#include<vector>
using namespace std;

int fibonacciNumber(int n){
    if(n == 0)
      return 0;
    if(n == 1)
      return 1;
    
    return fibonacciNumber(n-1) + fibonacciNumber(n-2);
}

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int result = fibonacciNumber(n);
    cout<<"fibonacci number  is: "<<result<<endl;
    return 0;
}