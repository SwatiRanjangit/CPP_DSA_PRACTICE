#include <iostream>
#include <cstring>
using namespace std;


int main() {
  string sentence="i am swati ranjan";
  string target = "tiya";
  
  sentence.replace(0,1,target);
  cout<<sentence<<endl;

  // bool ans =compareString(a,b);
  //  if(ans){
  //    cout<<"equal"<<endl;
  //  }else{
  //    cout<<"not equal"<<endl;
  //  }


  return 0;
}
