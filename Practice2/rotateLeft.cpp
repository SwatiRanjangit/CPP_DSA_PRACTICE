/*
1. make a temp array of size k and copy all first k elemnts in temp array
2. now shift all the  n-k elements from last by kth position to left
3. now copy all the temp elements into actual array
TC: O(n) SC:O(k)
*/

#include<iostream>
using namespace std;


void Rotatetoright(int arr[],int n, int k){
   if(n<=0){
    return;
   }

   k= k%n;
   if(k>n){
    return;
   }
   
  int temp[k];

  for(int i=0; i<k;i++){
    temp[i] = arr[i];
  } 

  for(int i=0; i<n-k; i++){
    arr[i]=arr[i+k];
  }

  for(int i=n-k;i<n;i++){
    arr[i]=temp[i-n+k];
  }

}

int main(){
    int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  Rotatetoright(arr, n, k);
  cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}