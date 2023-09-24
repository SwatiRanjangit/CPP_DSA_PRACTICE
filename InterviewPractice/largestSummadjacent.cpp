#include <iostream>
using namespace std;



int main() {
    
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int k;
    cin>>k;
    int max=0;
    for(int i=n-k;i<n;i++){
        max+=arr[i];
    }
    cout<<max<<endl;
  
    return 0;
}