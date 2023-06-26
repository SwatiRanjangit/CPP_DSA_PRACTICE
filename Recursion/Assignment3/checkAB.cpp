#include<iostream>
#include<cstring>
using namespace std;

bool checkAB(char input[], int startIndex){
    if(input[startIndex] == '\0')
     return true;

    if(input[startIndex] != 'a')
     return false;
    
    if(input[startIndex + 1] != '\0' && input[startIndex + 2]  != '\0'){
        if(input[startIndex +1 ] == 'b' && input[startIndex + 2] == 'b'){
            return checkAB(input, startIndex+3);
        }
    }
    
}


bool check(char input[]){
	bool ans;
	ans = checkAB(input, 0);
	return ans;
}


int main(){
    char input[100];
    bool ans;
    cin>>input;
    ans = check(input);
    if(ans){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

}