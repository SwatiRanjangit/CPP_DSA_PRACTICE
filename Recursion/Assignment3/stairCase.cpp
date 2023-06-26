#include<iostream>
using namespace std;

int stairCase(int n){
	if(n < 0)
		return 0;
	if(n == 0)
		return 1;

	return stairCase(n-1) + stairCase(n - 2) + stairCase(n - 3);
}

int main(){
	int n,output;
	cin>>n;
	output = stairCase(n);
	cout<<output<<endl;
}