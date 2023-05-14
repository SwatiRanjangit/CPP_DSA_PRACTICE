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

bool check_pallindrom(char arr[]){
    int len = length(arr);
    int i=0, j= len-1;
    while(i < j){
       if(arr[i++] == arr[j--]);
       else
        return 0;
       
    }
    return 1;
}

int main(){
    char name[100];
    cout<<"enter your name: "<<endl;
    cin.getline(name,20);
    cout<<check_pallindrom(name);
    return 0;
}