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
void replace(char arr[], char c, char x){
   int len = length(arr);
    int i=0;
    for(int i =0; i<len-1 ; i++){
         if(arr[i] == c){
            arr[i] = x;
         }
    }
    
}

int main(){
    char arr[100],c,x;
    cin.getline(arr,10);
    
    cout<<"enter char to be replaced: "<<endl;
    cin>>c>>x;
   

    replace(arr,c,x);
    cout<<"after replaced:"<<arr<<endl;
    return 0;
}