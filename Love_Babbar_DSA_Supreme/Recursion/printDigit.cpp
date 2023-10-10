#include <iostream>
#include<vector>
#include<climits>
using namespace std;


void printDigit(int num){
  if(num==0){
    return;
  }
   
   printDigit(num/10);
   int digit = num%10;
   cout<<digit<<endl;

   
}

int main() {
 int num;
 cin>>num;
 printDigit(num);
 return 0;
}