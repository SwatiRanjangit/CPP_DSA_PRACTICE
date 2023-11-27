//BRUTE FORCE 
//TC: O(n3)


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool hasDuplicate(string s, int start, int end){
    for(int i=start;i<end;i++){
        for(int j=i+1;j<end;j++){
            if(s[i]==s[j]){
                return true;
            }
        }
    }
    return false;
}
int longestSubString(string str){
    int n= str.length();
    int maxLength=0;
   for(int i=0;i<n;i++){
       for(int j=i+1;j<=n;j++){
           if(!hasDuplicate(str,i,j)){
               maxLength= max(maxLength,j-i);
           }
       }
   }
   return maxLength;
    
}

int main() {
  string s = ABCDEFGABEF”;
  int res = longestSubString(s);
  cout<<res<<endl;
   return 0;
}


// Optimal approach for O(n^2)
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
#include <unordered_set>
using namespace std;

int longestSubString(string str){
    int n= str.length();
   int maxLength=0;
   for(int i=0;i<n;i++){
       unordered_set<char>charSet;
       for(int j=i;j<n;j++){
           if(charSet.find(str[j]) == charSet.end()){
               charSet.insert(str[j]);
               maxLength= max(maxLength,j-i+1);
           }else{
               break;
           }
       }
   }
   return maxLength;
    
}
int main() {
   string s = "ABCDEFGABEF”;
   int result = longestSubString(s);
   cout<<result<<endl;

   
    return 0;
}