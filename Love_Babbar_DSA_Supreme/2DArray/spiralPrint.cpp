vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int total_length = m*n;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = m-1;
        int endingCol = n-1;
        
        int count =0;
        while(count<total_length){
            //starting row
            for(int i=startingCol;i<=endingCol && count<total_length;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            //ending column
            for(int i=startingRow;i<=endingRow && count<total_length;i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            //ending row
            for(int i=endingCol;i>=startingCol && count<total_length;i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            //starting col
            for(int i=endingRow;i>=startingRow&& count<total_length;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }