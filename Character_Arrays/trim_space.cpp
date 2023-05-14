#include<iostream>
#include<vector>
using namespace std;


void trim_space(char arr[]){
    int i=0, j=0;
     while(arr[i]){
        if(arr[i] != ' '){
            arr[j] = arr[i];
            j++;
        }
        i++;
     }
     arr[j] = '\0';
}

int main(){
    char string[100];
    cin.getline(string,20);
    cout<<"string is: "<<string<<endl;
    trim_space(string);
    cout<<"after trimming string is: "<<string<<endl;
    return 0;



}