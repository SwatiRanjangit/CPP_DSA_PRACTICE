#include<iostream>
#include<vector>
using namespace std;

void f(const int& p){
    // p++;    invalid
}

void f(const int* p){
    // *(p)++;  invalid
}
int main(){
    int const i = 10;
    int const *p = &i;

    int k = 12;
    int* p3 = &k;
    // f(p3);
    // g(p3);
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