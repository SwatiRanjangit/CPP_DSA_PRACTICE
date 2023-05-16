#include<iostream>
#include<vector>
using namespace std;

int main(){
    int* p = new int;
    *p = 10;
    cout<< *p <<endl;
    int n;

// int* pa = new int [50];  // space 200 on heap and 8byte on the stack. (statically allocate)
    cout<<"enter sizr: "<<endl;
    cin>>n;

    int* a = new int[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    cout<<"array is: "<<endl;
     for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    int max =-1;
    for(int i=0; i<n;i++){
        if(a[i] > max);
           max = a[i];
    }

    cout<<"max is: "<<max<<endl;
    delete []a;
    return 0;

}