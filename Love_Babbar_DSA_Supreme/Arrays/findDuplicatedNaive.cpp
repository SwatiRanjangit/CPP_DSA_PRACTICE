#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 3, 3};

    for (int i = 0; i < 5; i++) {
        int count = 0;
        bool isprinted=false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isprinted = true;
                break;
            }
            
        }
        
        if(!isprinted){
            for(int j=0;j<5;j++){
                 if (arr[i] == arr[j]) {
                    count++;
                }
            }
        }
        
        if (count > 1) {
            cout << arr[i] << endl;
        }
    }

    return 0;
}


// USING MAP

#include <iostream>
#include<unordered_map>
using namespace std;
int print(int arr[],int n){
    unordered_map<int,int>mp;
 for(int i=0;i<n;i++){
    mp[arr[i]]++;
 }
 
 for(auto it=mp.begin(); it != mp.end();it++){
     if(it->second == 2){
         cout<<it->first<<" "<<it->second<<endl;
     }
 }
  
   
}

int main() {
   int arr[7]= {1, 2, 3, 6, 3, 6, 1};
   print(arr,7);

    return 0;
}