#include <iostream>
using namespace std;

// int lastOcc(string& s,int i,char key, int& ans){
//   // left to right
//   if(s[i] == '\0') return 0;
  
//   if(s[i]==key) {
//     ans = i;
//   }

//   lastOcc(s,i+1,key,ans);

//   return ans;
 
// }
void lastOcc(string& s,int i,char key, int& ans){
  //  right to left 
  if(i<0) return;
  
  if(s[i]==key) {
    ans = i;
    return;
  }

  lastOcc(s,i-1,key,ans);

  
 
}
int main() {
  string s = "rbbbbbbf";
  int i = s.length() - 1; // Start from the end of the string
  char key='b';
  int ans = -1;
 lastOcc(s,i,key,ans);
  cout<<"Last occurence of character in string is: "<<ans<<endl;

  return 0;
}