#include<iostream>
#include<cstring>
using namespace std;

int length(char input[]){
    if(input[0] == '\0')
      return 0;
    int smallStringLength = length(input + 1);
    return 1 + smallStringLength;

}


int main(){
    char str[100];
    cin.getline(str, 100);
    cout<<length(str);
    return 0;

}