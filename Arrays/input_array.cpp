#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[100];
    //take input from user.
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    //print output of the array.
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}