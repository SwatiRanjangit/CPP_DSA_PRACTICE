#include<iostream>
#include<climits>
using namespace std;

char highest(char input[]){
	int charFreq[256] = {0};
	int maxIndex = 0, max = 0;
	int i =0, j;
	while(input[i]){
		j = int(input[i]);
		charFreq[j]++;
		i++;
	}
	for(i = 0;i < 256; i++){
		if(charFreq[i] > max){
			max = charFreq[i];
			maxIndex = i;
		}
	}
	return char(maxIndex);
}

int main(){
    char input[100];
    cin.getline(input, 20);
    cout<<highest(input);
    return 0;

}