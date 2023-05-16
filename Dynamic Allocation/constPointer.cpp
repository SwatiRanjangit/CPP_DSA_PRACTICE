#include<iostream>
#include<vector>
using namespace std;

int main(){
    int const i = 10;
    int const *p = &i;
    cout<<i<<endl;
    cout<<*p<<endl;
    // i++;
//    *(p++);  invalid as both are const

    int j = 11;
    int const *p1 = &i;
    cout<<j<<endl;
    cout<<*p1<<endl;
    j++;
    cout<<j<<endl;
    cout<<*p1<<endl;


}