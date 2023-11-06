// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

vector<int> addTwoArray(int arr[], int n,int brr[],int m,int crr[],int p){
   
   set<int>st;
   vector<int>ans;
   int i=0,j=0,k=0;
   while(i<n && j<m && k<p){
       if(arr[i] == brr[j] && brr[j]==crr[p]){
           st.insert(arr[i]);
           i++;
           j++;
           k++;
       }else if(arr[i]<brr[j]){
           i++;
       }else if(brr[j]<crr[p]){
           j++;
       }else{
           p++;
       }
   }
   for(auto s: st){
       ans.push_back(s);
   }
   return ans;
}

int main() {
  int arr[3]={1,2,3};
  int brr[3]={2,3,4};
  int crr[3]={2,3,5};
  int n=3;
  int m=3;
  int p=3;
  
  vector<int> ans = addTwoArray(arr,n,brr,m,crr,p);
  
  for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
  }

    return 0;
}