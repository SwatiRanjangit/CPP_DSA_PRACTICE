#include<iostream>
#include<cstring>
using namespace std;

void highest(char input[]){
	int n = strlen(input);					
	for(int i = 0; i < n; i++){
		int count = 1;
		while(i < n - 1 && input[i] == input[i + 1]){
			count++;
			i++;
		}
		cout<<input[i]<<count;
	}
}


int main(){
	char c[100];
	cin>>c;
	highest(c);
}