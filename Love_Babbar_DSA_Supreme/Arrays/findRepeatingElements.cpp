#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {
   int arr[8]={1,1,2,2,3,3,3,4};
   unordered_map<int,int>mp;
   vector<int>ans;
   for(int i=0;i<8;i++){
       mp[arr[i]]++;
   }
   
   for(int i=0;i<8;i++){
       if(mp[arr[i]] >1){
           ans.push_back(arr[i]);
           mp[arr[i]] = 0;
       }
   }
   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<endl;
   }
    return 0;
}
