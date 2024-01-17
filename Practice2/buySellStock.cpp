#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

//TC: O(n) SC:O(1)
int maxProfit(int arr[],int n){
    int mini=INT_MAX;
    int maxProfit=0;
    for(int i=0;i<n;i++){
      mini=min(mini,arr[i]);
      maxProfit=max(maxProfit, arr[i]-mini);
    }
    return maxProfit;
}
int main(){
    int arr[5]={7,6,4,3,1};
    cout<<maxProfit(arr,5);
}