// Dynamic memo allocation of 2D Array using vector
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>>arr(5,vector<int>(6,0));
   // printing
   for(int i=0; i<5;i++){
       for(int j=0; j<6;j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }

   //de-allocate 2D vector
   for(int i=0; i<row;i++){
    delete []arr[i];
   }

   delete []arr;

    return 0;
}