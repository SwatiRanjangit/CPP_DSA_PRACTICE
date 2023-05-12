#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j;
        for(int j= i-1; j>=0;j--){
             if(current < arr[j]){
                arr[j+1] = arr[j];
             }else{
                break;
             }
        }
        arr[j+1] = current;
    }
}

int main(){
    int arr[]={2,13,10,6,5,4};
    insertion_sort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}