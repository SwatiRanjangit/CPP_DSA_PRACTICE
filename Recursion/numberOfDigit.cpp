#include<iostream>
#include<vector>
using namespace std;

int noOfDigit(int n){

     if(n <= 9)
       return 1;
    
    return 1 + noOfDigit(n/10);    
}

int main(){
    int n;
    cin>>n;
    int result = noOfDigit(n);
    cout<<result<<endl;
    return 0;
}


