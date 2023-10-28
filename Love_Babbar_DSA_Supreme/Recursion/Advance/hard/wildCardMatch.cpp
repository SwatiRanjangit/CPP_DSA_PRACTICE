#include<iostream>
using namespace std;

bool isMatchPattern(string& s, int si, string& p, int pi){

     if(si == s.size() && pi == p.size()){
         return true;
     }

     if(si == s.size() && pi < p.size()){
         while(pi < p.size()){
             if(p[pi] != '*') return false;
             pi++;
         }
         return true;
     }

     //single character matching
     if(s[si] == p[pi] || '?' == p[pi]){
         return isMatchPattern(s,si+1,p,pi+1);
     }

    if(p[pi] == '*'){
       //treat * as empty or null
       bool caseA = isMatchPattern(s, si, p, pi+1);

       // lets * consume 1 char
       bool caseB = isMatchPattern(s, si+1, p, pi);

       return caseA || caseB;

    }
 

  
  // char not matched
  return false;
 }
    bool isMatch(string s, string p) {
        int si=0;
        int pi=0;

        return isMatchPattern(s,si,p,pi);
    }
    
    int main(){
        string s = "abcdef";
        string p = "ab*ef";
        if(isMatch(s,p)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
        
    }