#include<iostream>
using namespace std;

int triplate_sum(int arr[] , int n, int x){
    int triplate=0;
    for(int i=0; i<n;i++){
        for(int j= i+1; j<n;j++){
            for(int k = j+1; k<n ; k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    triplate++;
                }
            }
        }
    }
    return triplate;
}

int main(){
    int n ;
    cin>>n;
    int arr[100];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<triplate_sum(arr,n,12);


}