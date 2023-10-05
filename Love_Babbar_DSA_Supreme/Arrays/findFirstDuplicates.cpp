//using hashing method
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
 int arr[]={1,8,9,5,5,3,4};
  int size =6;
  unordered_map<int,int> hash;
  for(int i=0;i<size;i++){
     hash[arr[i]]++;
  }
  
  for(int i=0; i<size;i++){
      if(hash[arr[i]]>1){
          cout<<i+1<<endl;
          break;
      }
  }
 
  
}