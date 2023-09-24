/* 
Print the star pattern: 

* * * * * 
 * * * * 
  * * * 
   * * 
    * 

Approach: 
n = 5

row=0  star=5   space = 0
row=1  star=4   space = 1
row=2  star=3   space = 2
row=3  star=2   space = 3
row=4  star=1   space = 4

Formula: for space = go to row times 
         for star = go to (n - row)

*/


#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++){
      for(int j=0;j<i;j++){
          cout<<" ";
      }
      
      for(int k=0;k<n-i;k++){
          cout<<"* ";
      }
      cout<<endl;
  }
}