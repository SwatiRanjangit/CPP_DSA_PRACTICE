/* 
output is:

1 5 2 4 3 

*/

#include <iostream>
using namespace std;
int main() {
  int arr[5]={1,2,3,4,5};
  
  
  int size = 5;
  int start = 0;
  int end = size-1;
  while(start<=end){
  cout<<arr[start]<<" ";
  if(start != end)
    cout<<arr[end]<<" ";
    
  start++;
    end--;
  }
}