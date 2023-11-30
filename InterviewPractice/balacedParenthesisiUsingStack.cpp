//TC: O(n)
#include <iostream>
#include<map>
#include<vector>
#include<stack>
using namespace std;

int check(string str){
 stack<char>s;
 
 for(int i=0;i<str.length();i++){
     char c=str[i];
     if(c=='('){
         s.push('(');
     }else if(c == ')'){
         if(s.empty()){
             return 0;
         }else{
             char p=s.top();
             if(p=='('){
                 s.pop();
             }else{
                 return 0;
             }
         }
     }
     
     
 }
 
 if(s.empty())
     {
         return 1;
     }else{
         return 0;
     }
    
}

int main() {
   string str = "()(())()";
    if (check(str) == 0) {
        cout << "Invalid" << endl;
    }
    else {
        cout << "Valid" << endl;
    }
 

    return 0;
}