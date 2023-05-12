#include<iostream>
using namespace std;

void reverse_array(int arr[], int n){
   int i=0 , j=n-1;
   while(i < j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;

   }

}

int main(){
    int arr[]= {1,2,3,4,5};
    reverse_array(arr, 5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }

}