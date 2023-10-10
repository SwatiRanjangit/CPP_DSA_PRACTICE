#include <iostream>
#include<vector>
#include<climits>
using namespace std;

void findMax(int arr[],int n,int i,int& maxi){
  if(i>=n){
    return;
  }
 
   if(maxi<arr[i]){
    maxi = arr[i];
  }
  findMax(arr,n,i+1,maxi);
}

int main() {
 int arr[5]={10,20,70,40,50};
 int n=5;
 int i=0;
int maxi = INT_MIN;
findMax(arr,n,i,maxi);
cout<<maxi<<endl;

  

  return 0;
}