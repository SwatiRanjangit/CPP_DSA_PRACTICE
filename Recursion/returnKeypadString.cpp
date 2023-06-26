#include<iostream>
using namespace std;

int keypad(int num,string output[], string option[]){
	if(num == 0){
		output[0] = "";
		return 1;
	}

	int lastDigit = num % 10;
	int smallNumber = num / 10;
	string smallOutput[500];
	// cout<<"small =>"<<smallNumber<<endl;
	int smallCount = keypad(smallNumber, smallOutput, option);
	// cout<<"lastdigit => "<<lastDigit<<endl;
	string op = option[lastDigit];
	// cout<<"op"<<op<<endl;
	// cout<<"small Count => "<<smallCount<<endl;
	int k = 0;
	for(int i = 0; i < op.length(); i++){
		for(int j = 0; j < smallCount; j++){
			output[k] = smallOutput[j] + op[i];
			// cout<<"small =>"<<smallOutput[j]<<" "<<"le =>"<<output[k]<<endl;
			k++;
		}
	}
	return k;
}

int keypad(int num, string output[]){
	string option[] = {"","", "abc", "def", "ghi", "jkl", "mno", "pqrs","tuv","wxyz"};
	return keypad(num, output, option);
}

int main(){
	int num; 
	cin>>num;

	string output[10000];
	int count = keypad(num,output);
	for(int i = 0; i < count; i++){
		cout<<output[i]<<endl;
	}
	return 0;
}