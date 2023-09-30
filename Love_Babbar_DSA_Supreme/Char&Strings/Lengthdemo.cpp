#include <iostream>
#include <cstring> 
using namespace std;
int length(char arr[]){
  int len=0;
  for(int i=0;arr[i]!='\0';i++){
    len++;
  }
  return len;
}
int main() {
  char arr[60];
  cin.getline(arr,50);
  cout<<"length is: "<<length(arr)<<endl;
  //inbuilt function for length is strlen(arr)
  return 0;
}