/*Move all the negative to left side and positive to right side..(two pointer approach)*/

#include <iostream>
#include<vector>
using namespace std;

int main() {
  
 int arr[]={-1,2,3,-2,-5,6};
  int size =6;
  int start=0;
  int end=size-1;
  int i=0;
  while(start<end){
    if(arr[start]<0){
    start++;
      i++;
    }else if(arr[end]>0){
    end--;
     i++;
    }else{
      swap(arr[start],arr[end]);
      i++;
    }
  }

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  
}