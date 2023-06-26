#include<iostream>
#include<vector>
using namespace std;

void increasingOrder(int n){
    if(n == 0)
      return;
    
    increasingOrder(n-1);
    cout<<n<<" ";
}

 int main(){
    int n;
    cin>>n;
    increasingOrder(n);
    return 0;
 }