#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i =0; i<n-1;i++){
        //finding min element
        int min= arr[i], minIndex=i;
        for(int j=i+1; j<n;j++){
           if(arr[j] < min){
            min = arr[j];
            minIndex=j;
           }
        }
        
        //swap
        int temp = arr[i];
        arr[i]= arr[minIndex];
        arr[minIndex]=temp;
    }
}

int main(){
    int arr[]={2,3,1,6,5,4};
    selection_sort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}