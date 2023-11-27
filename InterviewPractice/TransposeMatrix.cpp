#include <iostream>
#include <vector>

using namespace std;

void transpose(int A[][4],int B[][4]) {
  for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
          B[i][j]=A[j][i];
      }
      cout<<endl;
    }
}

int main() {
    // int A[4][4] = { { 1, 1, 1, 1 }, 
    //                 { 2, 2, 2, 2 }, 
    //                 { 3, 3, 3, 3 }, 
    //                 { 4, 4, 4, 4 } }; 
    int A[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };


                    

     int B[4][4];
      // Function call 
    transpose(A,B); 
  
    cout << "Result matrix is \n"; 
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4; j++) 
            cout << " " << B[i][j]; 
  
        cout << "\n"; 
    } 


    return 0;
}
