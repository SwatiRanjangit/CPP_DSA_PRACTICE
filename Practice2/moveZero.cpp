#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> moveZeros(int n, vector<int> arr){
    int l=0;
    int r=n-1;
    int i=0;
   while(l<r){
    if(arr[l]==0){
      swap(arr[l],arr[r]);
      r--;
    }else{
        l++;
    }
   }
   return arr;
}
int main(){
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}