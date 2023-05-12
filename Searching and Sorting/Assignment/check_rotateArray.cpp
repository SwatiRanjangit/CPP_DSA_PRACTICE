#include<iostream>
using namespace std;

int check_rotate(int arr[],int n){
    if(n <= 1)
      return 0;

      int i=1;
      while( arr[i] > arr[i-1] && i < n)
        i++;
    if(i == n)
      return 0;
    
    return i;
}

int main(){
    int arr[]={5,6,1,2,3,4};
    cout<<check_rotate(arr,6);
    return 0;
}