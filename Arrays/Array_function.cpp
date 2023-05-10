#include<iostream>
using namespace std;

void printArray(int array[] , int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;

    int array[100];

    
    //take input from user.
    
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    printArray(array,n);

    /*
    //print output of the array.
    cout<<"array elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

    for(int i=0;i<n;i++){
       sum = sum + array[i];
    }

    cout<<"sum of the arrays is:  "<<sum<<endl;
    */

    return 0;
}