#include<iostream>
#include<climits>
#include<cstring>
using namespace std;

void removeCharacter(char arr[], char c){
       int j, n= strlen(arr);
      
       for(int i=j=0; i<n; i++){
           if(arr[i] != c)
              arr[j++] = arr[i];
       }
       arr[j] = '\0';

       cout<<arr;
}

int main(){
    char arr[100];
    
    cin.getline(arr,20);

    removeCharacter(arr, 'c');

}