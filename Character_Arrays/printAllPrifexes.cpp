#include<iostream>
#include<cstring>
using namespace std;

void printAllPrefixes(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        for(int j=0; j <= i; j++){
            cout<<arr[j];
        }cout<<endl;
    }
}

int main(){
    char arr[100];
    cin.getline(arr,20);
    printAllPrefixes(arr);
    return 0;
}