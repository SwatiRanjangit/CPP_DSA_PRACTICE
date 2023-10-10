#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void printSubsequence(string s,string output,int i,vector<string>& v) {
  if(i>= s.length()){
    //   cout<<output<<endl;
    v.push_back(output);
      return;
  }
  
  //exclude
  printSubsequence(s,output,i+1,v);
  //include
  output.push_back(s[i]);
  printSubsequence(s,output,i+1,v);
  
}

int main() {
 string s="abc";
 string output="";
 int i=0;
 vector<string> ans;
 printSubsequence(s,output,i,ans);
 
 cout<<"printing: "<<endl;
 for(auto val: ans){
     cout<<val<<" ";
 }
 

  return 0;
}
