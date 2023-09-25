/*
print the pattern


        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;


  
   for(int row=0;row<n;row++){
   //for space printing 
     for(int col=0;col<n-row-1;col++){
       cout<<"  ";
     }
     
     // because the counting starts from row value 
     int start= row +1;

     // loop for printing value start from row value till row count.
     for(int col=0;col<row+1;col++){
       cout<<start<<" ";
       start++;
     }

     // to print backward of the row
     int back=2*row;
     for(int col=0;col<row;col++){
       cout<<back<<" ";
       back--;
     }
     cout<<endl;
   }
     
    
  
}