#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, arr[1000],num;
    cin>>n>>num;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    reverse(arr+0, arr+num);
    reverse(arr+num, arr+n);
    reverse(arr+0, arr+n);
    for(int i = 0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}