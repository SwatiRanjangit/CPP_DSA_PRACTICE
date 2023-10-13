// TC : O(n) and SC: O(n)
#include <iostream>
using namespace std;

void reverse(string& st,int s, int e){
  if(s>=e) return;
  
  swap(st[s],st[e]);
  reverse(st,s+1,e-1);
}
int main() {
  string st = "swati";
  int s=0;
  int e=st.size()-1;
  reverse(st,s,e);
  cout<<st<<endl;

  return 0;
}