#include <iostream>
using namespace std;


string removeAllOccurenceSubstring(string s,string part){
    // step 1: to find the substring in the string by find method
        int pos = s.find(part);
        while(pos != string::npos){ // loop until substring doesn't find and pos became npos
        // delete the part of the substring using erase method starts the index from the pos and till the length os the substring part length.
            s.erase(pos,part.length());
            pos = s.find(part);
        }
        return s;
    
}
int main() {
 string str= "daabcbaabcbc";
  string part = "abc";
 string ans = removeAllOccurenceSubstring(str,part);
  
  cout<<"after removing all occurence of the substring in the string: "<<ans<<endl;
}