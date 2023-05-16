#include<iostream>
using namespace std;

int main(){
    char name[100];
    // cin.getline(name,20);
    cin.getline(name,20,'o'); // where it finds 'o' it stops because 'o' is delimeter in this case. by default '\n' is delimeter.
    cout<<name<<endl;
    return 0;
}