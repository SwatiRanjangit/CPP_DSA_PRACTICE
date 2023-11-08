#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string sentence="i am swati ranjan";
  string target = "tiya";
  
  if(sentence.find(target) == string::npos){
    cout<<"not found"<<endl;
  }else{
    cout<<"found"<<endl;
  }


  return 0;
}
