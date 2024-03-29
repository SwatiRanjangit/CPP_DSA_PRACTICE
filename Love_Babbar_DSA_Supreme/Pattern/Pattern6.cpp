/*
print this pattern

1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1

*/


#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  //for the upper part 
   for(int row=0;row<n;row++){
     for(int col=0; col<row+1;col++){
       cout<<row+1;
       //condition for not printing star at the end of the row
       if(col != row){
         cout<<"*";
       }
     }
     cout<<endl;
   }
 //for lower part
  for(int row=0;row<n;row++){
    //printing in the reverse order 
    for(int col=0;col<n-row;col++){
      cout<<n-row;
      //condition for not printing star at the end of the row
      if(col != n-row-1){
        cout<<"*";
      }
    }
    cout<<endl;
  }
}