#include <iostream>
using namespace std;

int main() {
//   int arr[5]={1,2,3,4,5};
//   cout<<arr<<endl;
//   cout<<arr[0]<<endl;
//   cout<<&arr<<endl;
//   cout<<&arr[0]<<endl;
//   cout<<*arr<<endl;
//   cout<<*(arr)+4<<endl;
//   cout<<(*arr)+3<<endl;
//   cout<<(*arr+1)<<endl;
   
//   cout<<"Condition All are same: "<<endl;
//   int i=0;
//   cout<<arr[i]<<endl;
//   cout<<i[arr]<<endl;
//   cout<<*(arr+i)<<endl;
//   cout<<(*arr+i)<<endl;
   
//   cout<<"Another section Array: "<<endl;
//   int arr[3]={10,20,30};
//   int* p = arr;
//   cout<<sizeof(p)<<endl;
//   cout<<sizeof(arr)<<endl;
//   cout<<sizeof(*p)<<endl; // print the size of 1 int 
// //   cout<<arr+1<<endl // can't do
//   p=p+1;
//   cout<<*p<<endl; // it can be done as it will point to the next elemnt of the array.
   
    cout<<"Another section Character: "<<endl;
    // char arr[10]="swati";
    // char* c = arr;
    // cout<<arr<<endl;
    // cout<<&c<<endl;
    // cout<<&arr<<endl;
    // cout<<*c<<endl; // *(c+0) = c[0];
    // cout<<c<<endl;
    // cout<<arr[0]<<endl;
    
    // char c[15] = "sher bano";
    // char* cp = &c[0];
    // cout<<c<<endl;
    // cout<<&c<<endl;
    // cout<<cp<<endl;
    // cout<<&cp<<endl;
    // cout<<*(cp+3)<<endl;
    // cout<<cp+2<<endl;
    // cout<<*c<<endl;
    // cout<<cp+8<<endl;
    
    //case of single character
    char ch='k';
    char* ct=&ch;
    cout<<ct<<endl; // print the value until it found the null character
    
   
   
    return 0;
}