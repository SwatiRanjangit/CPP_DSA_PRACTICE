#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

void minLen(char input[], char output[]){
    int minStart = -1, minLength = INT_MAX;
    int currentStart = 0, i = 0;
    int len = strlen(input);
    for(i = 0; i < len; i++){
        if(input[i] == ' '){
            int currentWordLength = i - currentStart;   // swati is good 
            if(currentWordLength < minLength){
                minStart = currentStart;
                minLength = currentWordLength;
            }
            currentStart = i + 1;
        }
    }
    int currentWordLength = i - currentStart;
    if(currentWordLength < minLength){
        minStart = currentStart;
        minLength = currentWordLength;
    }
    int j = 0;
    for(int i = minStart; i < minStart + minLength; i++){
        output[j++] = input[i];
    }
    output[j] = '\0';
}

int main(){
    char ch[10000], output[10000];
    cin.getline(ch, 10000);
    minLen(ch, output);
    cout<<output<<endl;
    return 0;
}
