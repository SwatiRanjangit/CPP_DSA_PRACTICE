// TC: O(n*m)
//SC: O(m+n)

#include<iostream>
#include<vector>
using namespace std;


void setZeroes(vector<vector<int>>&mat){
    int m= mat.size();
    int n=mat[0].size();

    // step1: make two vector one of column size and one of row size 
    vector<bool>zeroRow(m,false);
    vector<bool>zeroCol(n,false);
    
    // step2: now we have have to traverse through whole matrix and store the rows and col in which we found 0.
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==0){
            zeroRow[i]=true;
            zeroCol[j]=true;
            }
        }
    }

    // after storing rows and column for which we want to make the column and rows zero hence
    //step3: make rows zero
    for(int i=0;i<m;i++){
        if(zeroRow[i]){
            for(int j=0;j<n;j++){
                mat[i][j]=0;
            }
        }
    }

    // step4: make columns zero
    for(int j=0;j<n;j++){
        if(zeroCol[j]){
            for(int i=0;i<m;i++){
                mat[i][j]=0;
            }
        }
    }

}



int main(){
   // Example usage
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 0}
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