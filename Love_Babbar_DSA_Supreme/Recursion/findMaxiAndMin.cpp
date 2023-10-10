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


void findMin(int arr[],int n,int i, int& mini){
  if(i>=n) return;

  if(mini>arr[i]){
    mini=arr[i];
  }
  findMin(arr,n,i+1,mini);

}

int main() {
 int arr[5]={10,20,70,40,50};
 int n=5;
 int i=0;
int maxi = INT_MIN;
int mini = INT_MAX;
findMax(arr,n,i,maxi);
cout<<maxi<<endl;
findMin(arr,n,i,mini);
cout<<mini<<endl;

  

  return 0;
}