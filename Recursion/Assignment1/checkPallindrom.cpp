#include<iostream>
#include<cstring>
using namespace std;

int cpl(char c[], int start, int end){
    if( c[0] == '\0' || c[1] == '\0'){
        return 1;
    }

    if(start >= end)
     return 1;
    
    if(c[start] == c[end])
     return cpl(c, start+1, end-1);
    else 
       return 0;

}
bool checkPallindrom(char c[]){
    int len = strlen(c);
    return cpl(c,0,len-1);

}

int main(){
    char s[100];
    cin.getline(s,5);
    cout<<checkPallindrom(s);
    return 0;


}