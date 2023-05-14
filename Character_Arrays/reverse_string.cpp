#include<iostream>
#include<vector>
using namespace std;

int length(char arr[]){
    int count=0;
     for(int i=0; arr[i] !='\0'; i++){
         count++;
     }
     return count;
}

void reverse(char arr[]){
    int len = length(arr);
    int i=0, j= len-1;
    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    char name[100];
    cout<<"enter your name: "<<endl;
    cin.getline(name,20);
    cout<<"before reverse name is: "<<name<<endl;
    reverse(name);
    cout<<"after reverse string is : "<<name<<endl;
    return 0;
}