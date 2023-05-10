#include<iostream>
using namespace std;

void pair_sum(int arr[] , int n, int x){
    for(int i=0; i<n;i++){
        for(int j= i+1; j<n;j++){
            if(i != j){
                if(arr[i]+arr[j] == x){
                    if(arr[i]<arr[j]){
                        cout<<arr[i]<<" "<<arr[j]<<endl;
                    }else{
                        cout<<arr[j]<<" "<<arr[i]<<endl;
                    }
                }
            }
        }
    }
}

int main(){
    int n ;
    cin>>n;
    int arr[100];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    pair_sum(arr, n,7);

}