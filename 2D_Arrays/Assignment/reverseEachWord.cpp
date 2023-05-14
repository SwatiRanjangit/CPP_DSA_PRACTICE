#include<iostream>
#include<climits>
using namespace std;

int reverse(char s[], int start, int end){
      while(start < end){
        swap(s[start++], s[end--]);
    }
}

void reverse_wordWise(char arr[]){
     int start = 0, end = 0,i;
     for(i=0 ; arr[i] != '\0'; i++){
        if(arr[i] == ' '){
            end = i-1;
            reverse(arr, start, end);
            start = i+1;
        }
     }
     end = i-1;
     reverse(arr,start, end);

}

int main(){

  char arr[100];
  cin.getline(arr, 30);
  reverse_wordWise(arr);
  cout<<"after reverse: "<<arr<<endl;
  return 0;

}