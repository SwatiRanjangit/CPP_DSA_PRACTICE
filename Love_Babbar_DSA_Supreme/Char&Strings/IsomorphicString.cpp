/*

ISOMORPHIC STRINGS ARE THE STRINGS WHEN TWO STRING MAPS TO EACH OTHER IN SOME ORDER

eg: egg ->> add
where e maps to a
and g maps to d
*/


#include <iostream>
using namespace std;

bool isIsomorphic(string s, string t) {
        int hash[256]={0}; // mapping  each charcter of string s to string t.
        bool isTCharMapped[256]={0}; // stores if the character of t string matched with s.

        for(int i=0;i<s.size();i++){
            if(hash[s[i]] == 0 && isTCharMapped[t[i]] == 0){
                // map character of s to t
                hash[s[i]]=t[i];
                // then make that char mappped true
                isTCharMapped[t[i]] = true;
            }
        }
     
     // checking if there any charcater mismatch
        for(int i=0; i< s.size();i++){
            if(char(hash[s[i]]) != t[i]){
                return false;
            }
        }
        return true;
}
int main() {
 string  s = "egg", t = "add";
  if(isIsomorphic(s,t)){
    cout<<"strings are Isomorphic"<<endl;
  }else{
    cout<<"strings are not Isomorphic"<<endl;
  }
  
}