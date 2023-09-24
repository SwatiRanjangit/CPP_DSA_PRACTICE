// Program to check string anagram.
#include <iostream>
using namespace std;

bool check(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    
    int freq[26]={0};
    
    for(int i=0;i<s1.length();i++){
       freq[s1[i]-'a']++;
       freq[s2[i]-'a']--;
    }
    
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main() {
 string str="hello";
 string str1="lleho";
 if(check(str,str1)){
     cout<<"yes"<<endl;
 }else{
     cout<<"nO"<<endl;
 }

    return 0;
}