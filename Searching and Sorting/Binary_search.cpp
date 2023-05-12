#include<iostream>
using namespace std;

int binary_search(int arr[], int n,int x){
    int s=0;
    int e=n-1;
    int m = s+(e-s)/2;
    while(s<=e){
        if(arr[m]==x){
            return m;
        }else if(arr[m] < x){
            s=m+1;
        }else{
            e = m-1;
        }
      m = s+(e-s)/2;
    }

    return -1;
}

int main(){
    int n;
    cout<<"enter size of the array"<<endl;
    cin>>n;
    int arr[100];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<binary_search(arr,n,6);
  return 0;
}