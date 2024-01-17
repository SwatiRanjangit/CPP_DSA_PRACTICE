// TC: O(n*m)
//SC: O(1)

#include<iostream>
#include<vector>
using namespace std;


void setZeroes(vector<vector<int>>&mat){
    int m= mat.size();
    int n=mat[0].size();

    // step1: make two vector one of column size and one of row size 
    bool firstRow=false;
    bool firstCol=false;
    
    // step2: Check if the first row contains zero
    for(int j=0;j<n;j++){
        if(mat[0][j]==0){
            firstRow=true;
            break;
        }
    } 

      // step3: Check if the first col contains zero
    for(int i=0;i<m;i++){
        if(mat[i][0]==0){
            firstCol=true;
            break;
        }
    } 

    //step4:  Mark rows and columns based on other elements in the matrix
   for(int i=1;i<m;i++){
    for(int j=1;j<n;j++){
        if(mat[i][j]==0){
            mat[i][0]=0;  // Marking the first element of the corresponding row
            mat[0][j]=0;  // Marking the first element of the corresponding column
        }
    }
   }

   //step5: Set zeros based on the marks in the first row and first column

   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        if(mat[i][0]==0 || mat[0][j]==0){
           mat[i][j]=0;
        }
    }
   }

   //step6: Set zeros for the first row if needed
   if(firstRow){
    for(int j=0;j<n; j++){
        mat[0][j]=0;
    }
   }

   //step7: Set zeros for the first col if needed

     if(firstCol){
    for(int i=0;i<m; i++){
        mat[i][0]=0;
    }
   }

   
}



int main(){
   // Example usage
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 5}
    };

  cout << "Original Matrix:\n";
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
          cout << "\n";
    }

    setZeroes(matrix);

    cout << "\nMatrix after setting zeros:\n";
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
       cout << "\n";
    }

    return 0;
}