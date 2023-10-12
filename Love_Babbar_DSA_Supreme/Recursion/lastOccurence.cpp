#include <iostream>
using namespace std;

int lastOcc(string& s,int i,char key, int& ans){
  if(s[i] == '\0') return 0;
  
  if(s[i]==key) {
    ans = i;
  }

  lastOcc(s,i+1,key,ans);

  return ans;
 
}
int main() {
  string s = "abbbbbba";
  int i=0;
  char key='b';
  int ans = -1;
  int answer = lastOcc(s,i,key,ans);
  cout<<"Last occurence of character in string is: "<<answer<<endl;

  return 0;
}