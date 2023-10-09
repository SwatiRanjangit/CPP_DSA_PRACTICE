#include <iostream>
using namespace std;

void until(int* p){
  cout<<"in until "<<&p<<endl;
  // p = p+1; // it will not chage the actual value cz it chages in it's copy
  *p = *p + 1; // it will chage the value as it points to the *p means the value that is 5.
}
int main() {
   int a = 5;
   int* p=&a;
   cout<<"before: "<<endl;
   cout<<a<<endl;
   cout<<*p<<endl;
   cout<<&a<<endl;
   cout<<&p<<endl;
   cout<<p<<endl;

  until(p);

   cout<<"before: "<<endl;
   cout<<a<<endl;
   cout<<*p<<endl;
   cout<<&a<<endl;
   cout<<&p<<endl;
   cout<<p<<endl;
   

  return 0;
}