#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int checkRotation(int arr[], int n){
    int i=1,index =0;
    for(;i<n;i++){
        if(arr[i]<arr[i-1]){
            index = i;
        }
    }
    return index;
}
int main(){
    int n, arr[1000];
    cin>>n;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }

    cout<<checkRotation(arr,n);
    
}