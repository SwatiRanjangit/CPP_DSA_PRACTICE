#include<iostream>
#include<vector>
using namespace std;

int power(int x, int n){   
    if(n == 0)
     return 1;
    
    return x * power(x, n-1); 

}

int main(){
    int x, n;
    cin>>x >> n;
    int output = power(x, n);
    cout<<output<<endl;
    return 0;
}