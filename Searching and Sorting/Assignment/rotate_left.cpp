#include<iostream>
using namespace std;
void leftRotate(int arr[],int n){
    int temp = arr[0],i;
    for(i=0;i<n-1;i++){
      arr[i] = arr[i+1];
    }
    arr[i] = temp;
}
void rotate_left(int arr[],int n, int d){
    for(int i=0;i<d;i++){
       leftRotate(arr,n);
    }

}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    rotate_left(arr,7,2);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}