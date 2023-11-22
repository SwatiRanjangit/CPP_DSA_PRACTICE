#include <iostream>
#include<unordered_map>
using namespace std;



int main() {
   int arr[5]={1,1,2,2,3};
   unordered_map<int,int>mp;
   for(int i=0;i<5;i++){
       mp[arr[i]]++;
   }
   
   for(auto it = mp.begin(); it != mp.end(); ++it){
       cout<<it->first<<" "<<it->second<<endl;
   }
    return 0;
}
