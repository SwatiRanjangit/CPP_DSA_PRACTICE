#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicates(char input[], int newIndex, int index){
    if(input[index] == '\0'){
        input[newIndex] = input[index -1];
        input[newIndex + 1] = '\0';
        return;
    }

    if(input[index] == input[index - 1]){
        removeDuplicates(input, newIndex, index + 1);
        return;
    }else{
        input[newIndex] = input[index -1 ];
    }
    removeDuplicates(input, newIndex + 1, index + 1);
     
}


int main(){
    char str[100];
    cin.getline(str, 100);
    removeDuplicates(str, 0 , 1);
    cout<<str<<endl;
    return 0;


}