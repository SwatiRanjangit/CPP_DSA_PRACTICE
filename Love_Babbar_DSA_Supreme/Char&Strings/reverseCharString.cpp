#include <iostream>
#include <cstring> 
using namespace std;

void reverseCharArray(char arr[]){
  int i=0;
  int j= strlen(arr)-1;
  while(i<=j){
    swap(arr[i],arr[j]);
    i++;
    j--;
      
  }
}


int main() {
  char arr[60];
  cin.getline(arr,50);
  cout<<"initially is: "<<arr<<endl;
  reverseCharArray(arr);
  cout<<"after reverse: "<<arr<<endl;
 
  return 0;
}