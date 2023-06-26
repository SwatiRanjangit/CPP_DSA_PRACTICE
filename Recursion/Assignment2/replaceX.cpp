#include<iostream>
#include<cstring>
using namespace std;

void replaceX(char input[], int start = 0){
    if(input[start] == '\0'){
         return;
    }

    replaceX(input, start + 1);
    if(input[start] == 'x'){
        int length = strlen(input);
        int i;
        for( i = start+1 ; i<length; i++){
          input[i-1]=input[i];
        }
        input[i-1] = '\0';
    }
     
}


int main(){
    char input[100];
    cin.getline(input,100);
    replaceX(input);
    cout<<input<<endl;
    return 0;
}