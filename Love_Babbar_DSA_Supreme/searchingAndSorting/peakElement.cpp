#include <iostream>
using namespace std;
int peakElement(int arr[],int n){
  int s =0;
  int e = n -1;
  while(s<e){
    int mid = s+(e-s)/2;
    if(arr[mid]>=arr[0]){
      s = mid+ 1;
    }else{
      e = mid;
    }
    
  }
  return s;
 
  
}
int main() {
  
  int arr[]={6,7,1,2,3};
  int size =5;
  int res = peakElement(arr,size);
 cout<<"result is: "<<res<<endl;
  return 0;
}