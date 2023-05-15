#include<iostream>
using namespace std;

int main(){
    int i=20;
    int* p = &i;
    cout<<"address of  i: "<<&i<<endl;
    cout<<"value of p : "<<p<<endl;
    cout<<"value  of  i: "<<i<<endl;
    cout<<"value where p is pointing : "<<*p<<endl;
    i++;
    cout<<"after increment value where p is pointing : "<<*p<<endl;
    int a = i;
    a++;
    cout<<"after increment value where p is pointing : "<<*p<<endl;
    cout<<"size of integer i: "<<sizeof(i);
    cout<<"size of pointer p: "<<sizeof(p);
    return 0;

}