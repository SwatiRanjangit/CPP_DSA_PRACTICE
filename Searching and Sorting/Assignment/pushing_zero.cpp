#include<iostream>
using namespace std;

void push_zero_end(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[count++] = arr[i];
        }
    }

    while(count<n){
        arr[count++] = 0;
    }
}

int main(){
    int n;
    cout<<"enter size: "<<endl;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    push_zero_end(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}