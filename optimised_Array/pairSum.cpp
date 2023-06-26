#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int pairSum(int arr[], int n, int num){
   int count =0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j] == num){
            count++;
        }
    }
   }
   return count;
}


int main(){
    int n, arr[1000],num;
    cin>>n>>num;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    int pair = pairSum(arr,n,num);
    cout<<pair;
}