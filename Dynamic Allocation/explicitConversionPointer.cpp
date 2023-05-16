#include<iostream>
#include<vector>
using namespace std;

int main(){

     //******************  INTEGER TO CHARACTER CONVERSION *******************************8
    // int i = 65;
    // char c = i;
    // cout<<c<<endl;

    // //explicit pointer conversion
    // int* p = &i;
    // // char* pc = p;  not valid  
    // char* pc = (char*)p;  //valid (explicit conversion)

    // cout<<p<<endl;   // print  address of the value.
    // cout<<pc<<endl;  // it will print actual value.
    // cout<<*p<<endl;
    // cout<<*pc<<endl;
    // cout<<*(pc + 1)<<endl;
    // cout<<*(pc + 2)<<endl;
    // cout<<*(pc + 33)<<endl;


    //****************** CHARACTER TO INTEGER CONVERSION *******************************8

    char c = 'A';
    int i = c;
    cout<<i<<endl;

    // explicit pointer conversion
    char* p = &c; 
    int* pc = (int*)p;  //valid (explicit conversion)

    
    // cout<<p<<endl;   // print  address of the value.
    // cout<<pc<<endl;  // it will print actual value.
    cout<<*p<<endl;
    cout<<*pc<<" "<<endl;
    cout<<*(pc + 1)<<endl;
    cout<<*(pc + 2)<<endl;
    cout<<*(pc + 33)<<endl;


    

    return 0;

}