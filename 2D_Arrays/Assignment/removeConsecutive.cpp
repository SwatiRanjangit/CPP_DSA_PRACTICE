#include<iostream>
#include<climits>
using namespace std;

string removeConsecutive(string s){
    string result = "";
    for(int i=0; i<s.length();i++){
    if( i == s.length() || s[i] != s[i+1])
            result += s[i];
    
    }
    return result;
}


int main(){
   string s = "aabacca";
   cout<<removeConsecutive(s);
   
}