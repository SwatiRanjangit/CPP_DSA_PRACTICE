/*
Print this pattern:
    * 
   * * 
  * * * 
 * * * * 
* * * * * 



Approach: 
n = 5

row=0  space=4   star = 1
row=1  space=3   star = 2
row=2  space=2   star = 3
row=3  space=1   star = 4
row=4  space=0   star = 5

Formula: for space = go to (n-row-1) times 
         for star = go to (row+1)

*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++){
      for(int j=0;j<n-i-1;j++){
          cout<<" ";
      }
      
      for(int k=0;k<i+1;k++){
          cout<<"* ";
      }
      cout<<endl;
  }
}