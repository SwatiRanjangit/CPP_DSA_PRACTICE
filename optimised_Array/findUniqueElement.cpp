#include<iostream>
#include<vector>
using namespace std;
int uniqueA(int arr[], int n){
   
   int ans= arr[0];
   for(int i=1;i<n;i++){
    ans = ans ^ arr[i];
   }
   return ans;

}

int main(){
    int n, arr[1000];
    cin>>n;
    for(int i = 0 ; i<n ;i++){
        cin>>arr[i];
    }
    int unique = uniqueA(arr,n);
    cout<<unique;
}