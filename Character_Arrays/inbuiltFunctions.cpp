#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char name1[100], name2[100];
    cin>>name1>>name2;
    // int len = strlen(name);  // length of the string
    // cout<<"length of string: "<<len<<endl;
    // if(strcmp(name1, name2) == 0){  // compare two string
    //     cout<<"true";
    // }else{
    //     cout<<"false";
    // }
    cout<<"before copying: "<<name1<<"     "<<name2<<endl;
    // strcpy(name1,name2);
    // strcpy(name1,"hello");
    // strncpy(name1 , "hello", 2);
    strncpy(name1 , "he", 4);  // rest of two will assigned '\0' character at end of name1.
    cout<<"after copying: "<<name1<<"     "<<name2<<endl;

}
