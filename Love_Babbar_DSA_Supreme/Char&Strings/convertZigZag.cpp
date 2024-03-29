/*
OUTPUT : P A H N A P L S I I G Y I R 

*/
#include <iostream>
#include<vector>

using namespace std;
string convert(string s, int numRows) {
        if(numRows == 1) return s;

        int row=0,i=0;
        bool direction = 1; // 1-> Top to bottom
        vector<string> zigzag(numRows);

        while(true){
            if(direction){
             
              while(row <numRows && i<s.size()){
                   zigzag[row++].push_back(s[i++]);
              }
              row = numRows-2;
            }else{
                while(row>=0 && i<s.size()){
                    zigzag[row--].push_back(s[i++]);
                }
                row=1;

            }
            
            if(i>=s.size()) break;
            direction = !direction;
        }
        string ans="";

        for(int i=0; i<zigzag.size();i++){
            ans += zigzag[i];
        }

        return ans;
    }

int main() {
   string   s = "PAYPALISHIRING";
   int numRows = 3;
   string ans = convert(s,numRows);
  for(int i=0;i<ans.size();i++){
      cout<<ans[i]<<" ";
  }
   return 0;
}