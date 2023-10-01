#include <iostream>
using namespace std;


string removeAllAdjecent(string s){
   string ans="";
   int length = s.length();
     for(int i=0;i<length;i++){
       // if the length of ans is greater than 0 means there is some charatcters inside the ans and then we will check the condition that if last char equal to s[i] then we pop else we push in ans array.
        if(ans.length() > 0 && ans[ans.length()-1] == s[i]){
            ans.pop_back();
        }else{
            ans.push_back(s[i]);
        }
     }
    return ans;
    
}
int main() {
 string str= "abbaca";
 string ans = removeAllAdjecent(str);
  
  cout<<"after removing all adjacent elements: "<<ans<<endl;
}