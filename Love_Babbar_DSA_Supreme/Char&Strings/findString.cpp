#include <iostream>
#include <cstring>
using namespace std;

// bool compareString(string a, string b) {
//   if(a.length() != b.length()) return false;
  
//   int j=0;
//   for(int i=0;i<a.length();i++){
//     if(a[i] != b[i]){
//       return false;
//     }else{
//       j++;
//     }
//   }
//   return true;
// }

int main() {
  string sentence="i am swati ranjan";
  string target = "tiya";
  
  if(sentence.find(target) == string::npos){
    cout<<"not found"<<endl;
  }else{
    cout<<"found"<<endl;
  }

  // bool ans =compareString(a,b);
  //  if(ans){
  //    cout<<"equal"<<endl;
  //  }else{
  //    cout<<"not equal"<<endl;
  //  }


  return 0;
}
