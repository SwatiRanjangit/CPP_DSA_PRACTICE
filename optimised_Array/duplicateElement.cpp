#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int duplicateEle(int arr[], int n){
     return accumulate(arr, arr + n, 0) - ((n-2)*(n-1))/2;

}



int main(){
     int n, arr[1000];
    cin>>n;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    int duplicate = duplicateEle(arr,n);
    cout<<duplicate;
}