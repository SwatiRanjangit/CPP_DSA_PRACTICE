#include<iostream>
#include<cstring>
using namespace std;
void ps(char input[], int start){
    if(input[start] == 0)
     return;
    
    ps(input, start+1 );

    if(input[start] == input[start+1]){
        int len = strlen(input);
        input[len + 1] = '\0';
        int i;
        for(i = len -1; i >= start+1 ; i--){
           input[i+1] = input[i];
        }
        input[i+1] = '*';

    }
}
void pairStar(char input[]){
    ps(input, 0);

}

int main(){
     char s[1000];
    cin.getline(s, 1000);
    pairStar(s);
    cout << s << endl;
     return 0;

}