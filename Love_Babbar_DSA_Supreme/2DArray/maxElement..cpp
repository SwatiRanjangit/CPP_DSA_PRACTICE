#include <iostream>
#include<cmath>
using namespace std;


int findMax (int arr[][3]){
//column wise sum
  int max = INT8_MIN;
  for(int i=0;i<3;i++){
   
    for(int j=0;j<3;j++){
     if(arr[i][j]>max){
       max = arr[i][j];
     }
    }
  }
 return max;
}
int main() {
 
int arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
  
  //printing rowise 
  cout<<"Printing rowise: "<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  int ans = findMax(arr);
  cout<<"max element is: "<<ans<<endl;

  
  
}