#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
  int arr[5]={1,2,2,4,5};
  int n=5;
  int miss=-1;
  int rep=-1;
  
  for(int i=0;i<n;i++){
    int ind=arr[i]-1;
    if(arr[i] != arr[ind]){
        swap(arr[i],arr[ind]);
    }
  }

  for(int i=0;i<n;i++){
   if(arr[i] != i+1){
      cout<<"Repeating: "<<arr[i]<<endl;
      cout<<"Missing: "<<i+1<<endl;
   }
  }

}

