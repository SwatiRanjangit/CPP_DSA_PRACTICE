// Online C++ compiler to run C++ program online
/*

- - Q - 
Q - - - 
- - - Q 
- Q - - 


- Q - - 
- - - Q 
Q - - - 
- - Q - 

*/
#include <iostream>
#include<vector>
using namespace std;
void printSol(vector<vector<char>>&board, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(vector<vector<char>>&board,int row,int col, int n){
    int i=row;
    int j=col;
    
    //check row
    while(j>=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }
    
    // check for upper diagonal
    i=row;
    j=col;
    while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }
    
    //check lower diagonal
    i=row;
    j=col;
    while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }
}

void solve(vector<vector<char>>board,int col, int n){
    //base cae
    if(col >= n){
        printSol(board,n);
        return;
    }
    
    //case 1 place queen 1 in a place
    for(int row=0;row<n;row++){
        if(isSafe(board,row,col,n)){
            board[row][col]='Q';
            //recursive call
            solve(board, col+1,n);
            
            //backtracking
            board[row][col]='-';
        }
    }
    
}

int main() {
  int n=4;
  vector<vector<char>>board(n, vector<char>(n,'-'));
  int col =0;
  solve(board,col,n);
  

    return 0;
}