#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i = 10;
    int j = 12;
    int const * p = & i;  // pointer p is constant means where the p is pointing that integer is constant but the pointer is not constant.
    p = &j;  // is valid because pointer is not constant in this case.

    int * const p1 = &i; // p1 pointer is constant in this case that means we can not change the pointer where it is pointing.
    // p1 = &j;  // not valid 

    int const * const p2 = &i; // pointer and the value(integer) where pointer is pointing both are constant so both can not be changed
    // p2 = &j;  not valid
    // *(p2)++ not valid 

    return 0;


}