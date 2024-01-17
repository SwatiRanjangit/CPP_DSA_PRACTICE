#include <iostream>
#include<vector>
using namespace std;


 string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        string ans;
        while(true){
            // take 1st character and start comaparsion
            char curr_ch=0;
            for(auto str : strs){
                // case when i for any of the string in the array become greater than it's size.
                 if(i >= str.size()){
                     curr_ch =0;
                     break;
                 }
                // loop just started so it will compare 
                 if(curr_ch == 0){
                     curr_ch = str[i];
                 }else if(curr_ch != str[i]){
                     curr_ch=0;
                     break;
                 }
            }

            if(curr_ch == 0){
                break;
            }

            ans.push_back(curr_ch);
            i++;
           
        }
        return ans;
    }
int main() {
  
  vector<string>  strs {"flower","flow","flight"};
 
  string res = longestCommonPrefix(strs);
  cout<<"Longest Common prefix is: "<<res<<endl;
  return 0;
}