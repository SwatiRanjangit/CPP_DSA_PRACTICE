#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

void leaderInArray(int arr[], int n){
    for(int i=0; i<n; i++){
        int j;
        for( j=i+1; j<n;j++){
            if(arr[i] <= arr[j])
               break;
        }
        if(j == n)
           cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[100],n;
    cout<<"enter size: "<<endl;
    cin>>n;
    cout<<"enter array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leaderInArray(arr,n);


}