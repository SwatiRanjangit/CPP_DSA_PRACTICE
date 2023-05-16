#include<iostream>
#include<vector>
using namespace std;

int main(){
    const int i = 10;
    // i = 12; // can not change const variable value.
    // const int i;
    // i=10;  // it is not valid we have to initilaze const variable at the time of initilization.
    // NOTE: we can make the path as constant but not the storage as constant in any case.

    // CONSTANT REFERENCE BY A NON CONST INTEGER.
    int j =12;
    const int& k = j; 
    // k++;   // we can not do this as k is constant.
    j++;  // we can chnage the value by this path but not by k++(as both k and j refer to same storage but we can chage the value of the storage only by j but not by k).
    cout<<k<<endl;
    cout<<j<<endl;

}