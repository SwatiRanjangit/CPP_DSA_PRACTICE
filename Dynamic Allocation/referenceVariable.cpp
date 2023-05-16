#include<iostream>
#include<vector>
using namespace std;

void increment(int& n){
    n++;
}

//bad practice

int& f(int n){
    int a = n;
    return a;
}

//bad practice

int* f2(){
    int i = 10;
    return &i;
}

int main(){

    int* p = f2();  // bad practice
    int i = 10;

    int& k = f(i); // bad practice
    int& j = i;
    cout<<i<<endl;
    cout<<j<<endl;
    i++;
    cout<<j<<endl;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    cout<<i<<endl;

    int k = 100;
    j=k;
    cout<<j<<endl;
    cout<<i<<endl;

    increment(i);
    cout<<"i is: "<<i<<endl;
    cout<<"j is: "<<j<<endl;

    return 0;

    

    
}