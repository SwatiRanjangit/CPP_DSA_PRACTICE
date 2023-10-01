#include <iostream>
using namespace std;

bool checkPallindrom(string s,int st,int e){
    while(st<=e){
        if(s[st] != s[e]){
            return false;
        }else{
            st++;
            e--;
        }
    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<=j){
        if(s[i] != s[j]){
            // ek bar i ko remove kr do ek bar j ko
            return checkPallindrom(s,i+1,j) || checkPallindrom(s,i,j-1);

        }else{
            i++;
            j--;
        }
        }
        return true;
    }

int main() {
  string s="abcaa";
  bool ans = validPalindrome(s);
  if(ans){
    cout<<"yes"<<endl;
  }else{
    cout<<"no"<<endl;
  }
}