/*

print the pattern
    1
   1 2
  1   3
 1     4
1 2 3 4 5

 */


#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;


  
   for(int row=0;row<n;row++){
   //for space printing 
     for(int col=0;col<n-row-1;col++){
       cout<<" ";
     }

     
     int start =1;
     // beacuse the number of pattern in each line is 1,3,5,7,9 so it is odd number hence loop till odd number of n
     for(int col=0;col<2*row+1;col++){
       // printing 1st and last row beacuse it is diffrent from others
       if(row==0 || row == n-1){
        // in last row because of even place has number and odd place has space 
         if(col%2==0){
           cout<<start;
           start++;
         }else{
           cout<<" ";
         }
       }else{
        //for printing the elements in the middle part 
         if(col == 0){
          cout<<"1";
         }else if(col == 2*row+1-1){
           cout<<row+1;
         }else{
           cout<<" ";
         }
       }
        
     }
     cout<<endl;
     
    
   }
     
    
  
}