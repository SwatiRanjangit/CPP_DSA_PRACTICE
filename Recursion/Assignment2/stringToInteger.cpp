#include<iostream>
#include<cstring>
using namespace std;

int stringInteger(char input[], int last){
   if(last == 0){
    return input[0] - '0';
   }

   int smallAns = stringInteger(input, last-1);
   int a = input[last] - '0';
   return smallAns * 10 + a;

}
int stringToInteger(char input[]){
    int len = strlen(input);
    return stringInteger(input,len-1);
}

int main(){
    char s[100];
    cin.getline(s, 100);
    cout<<stringToInteger(s)<<endl;
    return 0;
}