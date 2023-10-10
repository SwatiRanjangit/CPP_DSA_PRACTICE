#include <iostream>
#include<vector>
#include<climits>
using namespace std;

bool FindChar(string s,int n,int i, char c){
  if(i>=n) {
    return false;
  }

  if(s[i]==c){
    return true;
  }
  return FindChar(s,n,i+1,c);
    
   
}



int main() {
 string str = "Love babbar";
 int n= str.length();
 char ch='o';
 int i=0;
 bool found=FindChar(str,n,i,ch);
 if(found){
  cout<<"found"<<endl;
 }else{
  cout<<"not found"<<endl;
 }

  

  return 0;
}