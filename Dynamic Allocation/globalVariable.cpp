#include<iostream>
#include<vector>
using namespace std;
int a;   // global variable (it is a bad practice instead use refrence variable.)
void g(){
    a++;
    cout<<a<<endl;
}
void f(){
    cout<<"in func:"<<a<<endl;
    a++;
    g();
    

}
int main(){
    a=10;
    f();
    cout<<"in main:"<<a<<endl;
    return 0;
}