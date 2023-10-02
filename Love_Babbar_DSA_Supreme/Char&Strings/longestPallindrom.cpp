#include <iostream>
using namespace std;

//TIME COMPLEXITY: O(n2)

bool isPallindrom(string &s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(isPallindrom(s,i,j)){
                  string temp = s.substr(i , j-i+1);
                  ans = temp.size() > ans.size() ? temp : ans;
                }
            }
        }
        return ans;
    }
int main() {
   string s = "babad";
   string ans = longestPalindrome(s);
   cout<<"longest pallindrom string is: "<<ans<<endl;

    return 0;
}