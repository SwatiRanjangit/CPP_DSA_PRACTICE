// TC AND SC: O(N)

#include <iostream>
#include <algorithm>
using namespace std;

bool pallindromCheck(string& str, int s, int e){
  // base case
   if(s>=e){
    return true;
   }

  // 1 case 
   if(str[s] != str[e]){
    return false;
   }

   return  pallindromCheck(str,s+1,e-1);
  
}

int main() {
   string st="toot";
   int e = st.size()-1;
   bool ans = pallindromCheck(st,0,e);
   if(ans){
    cout<<"true"<<endl;
   }else{
    cout<<"false"<<endl;
   }
   
  return 0;
}
