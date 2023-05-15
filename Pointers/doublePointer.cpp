#include<iostream>
using namespace std;


void incrementPointer(int** p){
    p = p + 1;
}

void increment(int** p){
    *p = *p + 1;
}

void increment1(int** p){
    **p = **p + 1;
}

int main(){
    int i= 10;
    int* p = &i;
    int** p1 = &p;
    // cout<<&p<<endl;
    // cout<<p1<<endl;

    // cout<<p<<endl;
    // cout<<*p1<<endl;
    // cout<<&i<<endl;

    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p1<<endl;

    // cout<<p1<<endl;
    // incrementPointer(p1);
    // cout<<p1<<endl;

    // cout<<*p1<<endl;
    // increment(p1);
    // cout<<*p1<<endl;

    cout<<**p1<<endl;
    increment1(p1);
    cout<<**p1<<endl;
    return 0;
}