#include <iostream>
using namespace std;
// pass by refrence
void solve(int& b){
  b++;
}
int main() {
   int a=5;
   cout<<"before: "<<a<<endl;
   solve(a);
   cout<<"after: "<<a<<endl;
  //  int& b = a; // b is also refrreing to a memo location
  //  cout<<a<<endl;
  //  cout<<b<<endl;
  //  a++;
  //  cout<<a<<endl;
  //  cout<<b<<endl;
  return 0;
}