#include <iostream>
#include <vector>
using namespace std;

int main() {
  int arr[]={1,3,5,7,9};
  int size1=5;
  int sum=8;

  for(int i=0;i<size1;i++){
   for(int j=i+1;j<size1;j++){
     if(arr[i]+arr[j]==sum){
       cout<<arr[i]<<" "<<arr[j]<<endl;
       

     }
   }
  }