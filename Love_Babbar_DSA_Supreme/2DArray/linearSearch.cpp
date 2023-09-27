#include <iostream>
using namespace std;


bool Search (int arr[][3],int key){
//column wise sum
  for(int i=0;i<3;i++){
   
    for(int j=0;j<3;j++){
     if(arr[i][j]==key){
       return true;
     }
      
    }
  
  }
  return false;
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

  bool ans = Search(arr,10);
  if(ans !=false){
    cout<<"true";
  }else{
    cout<<"false";
  }
  
  
}