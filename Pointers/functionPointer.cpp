#include<iostream>
using namespace std;
void print(int* p){
    cout<<*p<<endl;
}

void incrementPointer(int* p){
    p = p + 1;
}

void increment(int* p){
    (*p)++;
}

int main(){
    int i =10;
    int*p = &i;
    print(p);
    cout<<"before: "<<p<<endl;
    incrementPointer(p);
    cout<<"before: "<<p<<endl;
    cout<<"value of where pointer  pointing: "<<*p<<endl;
    increment(p);
    cout<<"after incremnet value of where pointer  pointing: "<<*p<<endl;
    return 0;
}