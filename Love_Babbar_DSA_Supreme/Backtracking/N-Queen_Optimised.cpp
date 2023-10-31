 unordered_map<int,bool>rowCheck;
  unordered_map<int,bool>upperDiagonalCheck;
  unordered_map<int,bool>lowerDiagonalCheck;

void StoreSol(vector<vector<char>>&board, int n, vector<vector<string>>& ans){
    vector<string> temp;
    for(int i=0;i<n;i++){
        string output="";
        for(int j=0;j<n;j++){
           output.push_back(board[i][j]);
        }
        temp.push_back(output);
    }
    ans.push_back(temp);
}
  
bool isSafe(vector<vector<char>>&board,int row,int col, int n){
   if(rowCheck[row]==true)
     return false;
    
   if( upperDiagonalCheck[n-1 + col - row]==true)
     return false;
   
   if(lowerDiagonalCheck[row+col]==true)
     return false;

   
   return true;

}

  void solve(vector<vector<char>>board,int col, int n, vector<vector<string>>& ans){
    //base cae
    if(col >= n){
        StoreSol(board,n,ans);
        return;
    }
    
    //case 1 place queen 1 in a place
    for(int row=0;row<n;row++){
        if(isSafe(board,row,col,n)){
            board[row][col]='Q';
            rowCheck[row]=true;
            upperDiagonalCheck[n-1 + col - row]=true;
            lowerDiagonalCheck[row+col]=true;

            //recursive call
            solve(board, col+1,n,ans);

            
            //backtracking
            board[row][col]='.';
            rowCheck[row]=false;
            upperDiagonalCheck[n-1 + col - row]=false;
            lowerDiagonalCheck[row+col]=false;
        }
    }
    
}

    vector<vector<string>> solveNQueens(int n) {
         vector<vector<char>>board(n, vector<char>(n,'.'));
         vector<vector<string>> ans;
         int col =0;
         solve(board,col,n,ans);
         return ans;
    }