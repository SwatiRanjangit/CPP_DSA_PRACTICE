/*

a
ab
abc
b
bc
c

*/

#include <iostream>
using namespace std;

 void printsubstr(string s) {
   int n = s.length();
        for(int i=0;i<n;i++){
          for(int j=i;j<n; j++){
            cout<<s.substr(i,j-i+1)<<endl;
          }
          
        }

}

int main() {
  
  string s = "abc";
  printsubstr(s);
}