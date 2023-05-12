#include<iostream>
#include<vector>
using namespace std;

void sort(int arr[], int n){
    int i, next0=0, next2=n-1;

    for(int i=0; i <=next2;){
        if(arr[i] == 2){
          swap(arr[i],arr[next2]);
          next2--;
        }else if(arr[i]==0){
            swap(arr[i],arr[next0]);
            next0++;
            i++;
        }else{
            i++;
        }
    }
}

int main(){
    int arr[]={0,1,2,1,0,1,2,0};
    sort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i];
    }

    return 0;
}