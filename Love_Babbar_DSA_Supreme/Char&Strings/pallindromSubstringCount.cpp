// TIME COMPLEXITY: O(n2) time
//MOST IMPORTANT FOR INTERVIEW

#include <iostream>

using namespace std;

 int expandAroundIndex(string s,int i,int j){
       int count =0;
         //jbtk match ho rha hai substring to count++ and left me jao and right me jao
       while(i>=0 && j<s.length() && s[i]==s[j]){
           count++;
           i--;
           j++;
       }
       return count;
   }

int countSubstrings(string s) {
       int count =0;

       for(int i=0;i<s.length();i++){
           //case of odd
           int oddAns = expandAroundIndex(s,i,i);
           count = count + oddAns;

           //case of even
           int evenAns = expandAroundIndex(s,i,i+1);
           count = count + evenAns;
       }
     return count;
    }

int main() {
  
  string s = "aaa";
  int ans = countSubstrings(s);
  cout<<"total pallindrom string count is: "<<ans<<endl;
}