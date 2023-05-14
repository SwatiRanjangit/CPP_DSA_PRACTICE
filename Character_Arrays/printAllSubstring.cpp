#include<iostream>
#include<cstring>
using namespace std;

void printAllSubstring(char arr[]){
    for(int start=0 ; arr[start]!='\0'; start++){
    for(int i=start; arr[i] != '\0'; i++){
        for(int j=start; j <= i; j++){
            cout<<arr[j];
        }cout<<endl;
    }
}
}
int main(){
    char arr[100];
    cin.getline(arr,20);
    printAllSubstring(arr);
    return 0;
}