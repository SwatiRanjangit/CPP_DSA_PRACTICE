#include<iostream>
using namespace std;

int length(char arr[]){
    int count=0;
     for(int i=0; arr[i] !='\0'; i++){
         count++;
     }
     return count;
}

int main(){
    char name[100];
    cout<<"enter your name: "<<endl;
    cin>>name;
    name[4]='d';
    name[3]='x';
    name[2]='\0';
    cout<<"name is: "<<name<<endl;
     cout<<"length of the string is: "<<length(name)<<endl;
    return 0;
}