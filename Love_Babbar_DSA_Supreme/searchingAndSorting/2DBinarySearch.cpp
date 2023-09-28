#include <iostream>
using namespace std;
bool binarySearch(int arr[][3],int m,int n,int target){
  int s =0;
  int size = m * n;
  int e = size -1;
  while(s<=e){
    int mid = s+(e-s)/2;
    int rowIndex= mid /n; // finding rowIndex of the value of mid here n= columns
    int colIndex = mid % m; // finding columnIndex of the value of mid m = rows
    
    if(arr[rowIndex][colIndex] == target){
    cout<<"found at: "<<rowIndex<<" "<<colIndex<<endl;
      return true;
    }else if(arr[rowIndex][colIndex] < target){
      s = mid +1;
    }else{
      e = mid -1;
    }
  }
  return false;
  
}
int main() {
  
  int arr[3][3]={
  {1,2,3},
  {4,5,6},
  {7,8,9},
  };
  int row =3;
  int col =3;
  bool res = binarySearch(arr,row,col,10);
  if(res){
    cout<<"found"<<endl;
  }else{
    cout<<"not found"<<endl;
  }

  return 0;
}