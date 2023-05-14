#include<iostream>
using namespace std;

int main(){
    char name[100];
    // cin.getline(name,20);
    cin.getline(name,20,'o');
    cout<<name<<endl;
    return 0;
}