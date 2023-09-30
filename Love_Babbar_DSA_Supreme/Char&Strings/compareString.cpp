#include <iostream>
#include <cstring>
using namespace std;

bool compareString(string a, string b) {
  if(a.length() != b.length()) return false;
  
  int j=0;
  for(int i=0;i<a.length();i++){
    if(a[i] != b[i]){
      return false;
    }else{
      j++;
    }
  }
  return true;
}

int main() {
  string a,b;
  cin>>a>>b;

  bool ans =compareString(a,b);
   if(ans){
     cout<<"equal"<<endl;
   }else{
     cout<<"not equal"<<endl;
   }


  return 0;
}
