#include<iostream>
#include<vector>
using namespace std;

int countZero(int n){
    
    if(n <= 9){
       if(n == 0)
         return 1;
        else
         return 0;
    }

    int last = n % 10;
    int count=0;
    if(last == 0)
     count = 1;
    
    return count + countZero(n/10);

    
    
}

int main(){
    int n;
    cin>>n;
    cout<<countZero(n);
    return 0;
}