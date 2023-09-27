#include <iostream>
using namespace std;
int main() {
 int n,m;
  cin>>m>>n;
int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  
  //printing rowise 
  cout<<"Printing rowise: "<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  //printing rowise 
  cout<<"Printing column wise: "<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }
  
}