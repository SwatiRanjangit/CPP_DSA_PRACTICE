#include<iostream>
using namespace std;

void sort(int arr[], int n){
    int i=0, j = n-1, temp;
    while( i<j){
      if(arr[i] == 1){
        temp = arr[j];
        arr[j]= arr[i];
        arr[i]= temp;
        j--;
      }else{
        i++;
      }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i =0;i<n ; i++){
        cin>>arr[i];
    }
    sort(arr,n);
    for(int i =0;i<n ; i++){
        cout<<arr[i];
    }
}