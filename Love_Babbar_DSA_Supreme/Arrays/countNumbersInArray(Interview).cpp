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


// IN ORDER PRINTING THE VALUES 

// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    int arr[11]={1,2,2,3,3,3,4,5,5,5,5};
    unordered_map<int,int> mp;
    for(int i=0;i<11;i++){
        mp[arr[i]]++;
    }
    
    // for(auto it=mp.begin(); it != mp.end();it++){
    //     cout<<it->first << " "<<it->second<<endl;
    // }
    
    for(int i=0;i<11;i++){
       if( mp[arr[i]] != -1){
           cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
           mp[arr[i]]=-1;
           
       }
        
    }
    
    
    return 0;
}