#include<iostream>
#include<cstring>
using namespace std;


int main(){
    string* sp = new string;
    *sp = "def";
    cout<<sp<<endl;
    cout<<*sp<<endl;


    string s = "abc";
    getline(cin,s);
    cout<<s<<endl;

    s = "defdef";
    cout<<s[0]<<endl;
    s[0] = 'x';
    string s1;
    s1="jiii";

    string s2 = s + s1;
    cout<<s2<<endl;

    s+=s1;
    cout<<s1<<endl;
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    cout<<s.substr(3)<<endl;
    cout<<s.substr(3,3)<<endl;

    cout<<s.find("def")<<endl;
    return 0;



}