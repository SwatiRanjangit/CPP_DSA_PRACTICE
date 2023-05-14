#include<iostream>
#include<climits>
using namespace std;

bool checkPermuatation(char s[], char s1[]){
	int freqArr[256] = {0};
	int i;
	for(i = 0; s[i]; i++){
		int j = int(s[i]);
		freqArr[j]++;                    
	}
	for(i = 0; s1[i];i++){
		int j = int(s1[i]);
		freqArr[j]--;
	}
	for(i = 0; i <= 255; i++){
		if(freqArr[i]!=0)
			return false;
	}
	return true;
}


int main(){
	char s[100],s1[100];
	cin>>s>>s1;
	cout<<checkPermuatation(s,s1);
}