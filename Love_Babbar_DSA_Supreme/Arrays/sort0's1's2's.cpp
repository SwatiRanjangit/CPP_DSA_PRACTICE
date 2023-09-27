#include <iostream>
#include<vector>
using namespace std;

int main() {
 int arr[10]={1,0,1,0,2,0,1,2,2,0};
  int size =10;
  int start=0;
  int end=size-1;
  int i=0;
  while(i<=end){
    if(arr[i]==0){
      swap(arr[i],arr[start]);
      start++;
      i++;
    }else if(arr[i]==2){
      swap(arr[i],arr[end]);
      end--;
     
    }else{
      i++;
    }
  }

  for(int i=0;i<size;i++){
    cout<<arr[i];
  }
  
}