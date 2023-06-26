#include<iostream>
#include<cstring>
using namespace std;

int sumOfDigit(int n){
    if( n<= 9)
        return n;
    
    int last = n % 10;
    return  last + sumOfDigit(n/10);

}


int main(){
    int n;
    cin>>n;
    cout<<sumOfDigit(n);
    return 0;
}