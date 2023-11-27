// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <unordered_set>
using namespace std;

int maxRepeating(string str){
    int n= str.length();
   int maxi= INT_MIN;
   char result = '\0';
   for(int i=0;i<n;i++){
       int count=0;
      for(int j=i+1;j<n;j++){
          if(str[i]==str[j]){
              count++;
             if (count > maxi) {
                    maxi = count;
                    result = str[i];
                }
          }else{
              break;
          }
      }
       
   }
   return result;
  
    
}
int main() {
   string s = "aaaabbbbbbbbbbbcc”;
   char result = maxRepeating(s);
   cout<<result<<endl;

   
    return 0;
}