#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3};
    char b[]="abcde";
    cout<<a<<endl;
    cout<<b<<endl;

    char* c= &b[0];
    cout<<c<<endl;

    char w = 'a';
    char* r = &w;
    cout<<w<<endl;
    cout<<r<<endl;
    return 0;


}