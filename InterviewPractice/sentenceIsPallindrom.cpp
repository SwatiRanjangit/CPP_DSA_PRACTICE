// using two pointer approach 
//tc: O(n)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool sentencePalindrome(string str){
    int l=0, h = str.length()-1;
    
    for(int i=0;i<str.length();i++){
        str[i]= tolower(str[i]);
    }
    
    while(l<=h){
        
        //case for  if there is no charcter and there is space or any special symbol
        if(!(str[l]>='a' && str[l]<='z')){
            l++;
        }else if(!(str[h]>='a' && str[h]<='z')){
            h--;
        }
        
        // for char
       else if(str[l]==str[h]){
           l++;
           h--;
           
       }else{
           return false;
       }
       
        
    }
    return true;
    
}
int main() {
   string str = "Too hot to hoot."; 
   
    if (sentencePalindrome(str)) 
        cout << "Sentence is palindrome."; 
    else
        cout << "Sentence is not palindrome."; 
   
    return 0;
}