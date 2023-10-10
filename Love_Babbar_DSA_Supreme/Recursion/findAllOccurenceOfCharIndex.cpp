// #include <iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// void FindAllChar(string& s,int& n,int& i, char& c){
//   if(i>=n) {
//     return;
//   }

//   if(s[i]==c){
//     cout<<"Found at: "<<i<<endl;
//   }
//   int newi = i + 1;
//   return FindAllChar(s,n,newi,c);
    
   
// }

// int main() {
//  string str = "Love babbar";
//  int n= str.length();
//  char ch='b';
//  int i=0;
// FindAllChar(str,n,i,ch);
//  return 0;
// }


//SECOND APPROACH: 
#include <iostream>
#include<vector>
#include<climits>
using namespace std;

//NOTE: whenever we want to pass any data in which we want to do modifiction we pass it by refrence like here in the case of vector ans where i want to store all occurence.
void FindAllChar(string& s,int& n,int& i, char& c,vector<int>& ans){
  if(i>=n) {
    return;
  }

  if(s[i]==c){
    // cout<<"Found at: "<<i<<endl;
    ans.push_back(i);
  }
  int newi = i + 1;
  return FindAllChar(s,n,newi,c,ans);
    
   
}

int main() {
 string str = "Love babbar";
 int n= str.length();
 char ch='b';
 int i=0;
 vector<int> ans;
 FindAllChar(str,n,i,ch,ans);
cout<<"printing value: "<<endl;
for(int val: ans){
  cout<<val<<" ";
}
 return 0;
}