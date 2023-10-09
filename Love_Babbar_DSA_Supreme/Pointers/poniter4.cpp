#include <iostream>
using namespace std;

void until(int** ptr){
  
  // *ptr = *ptr + 1; // will not chage the value because in *p the value is = address of p.

  **ptr = **ptr+1; // will chage the value of actual a because in **ptr refer to **q means value at a = 5
}
int main() {
   int a = 5;
   int* p=&a;
   int** q = &p;
   cout<<"before: "<<endl;
   cout<<a<<endl;

  until(q);

   cout<<"before: "<<endl;
   cout<<a<<endl;
   

  return 0;
}