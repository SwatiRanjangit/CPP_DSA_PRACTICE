#include<iostream>
#include<vector>
using namespace std;

int length(char arr[]){
    int count=0;
     for(int i=0; arr[i] !='\0'; i++){
         count++;
     }
     return count;
}

void reverse(char arr[], int start, int end){
    while(start < end){
        swap(arr[start++], arr[end--]);
    }
}

void reverse_string(char arr[]){
    int i=0, j = length(arr)-1;
    while(i < j){
        swap(arr[i++],arr[j--]);
    }
}

void reverse_wordWise(char arr[]){
     reverse_string(arr);
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
    cin.getline(arr, 20);
    reverse_wordWise(arr);
    cout<<"after reverse: "<<arr<<endl;
    return 0;
}