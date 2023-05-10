#include<iostream>
using namespace std;

int linear_search(int array[] , int n, int num){
    int i=0;
    for( ;i<n;i++)
        if(array[i]==num)
            return i;
            
            return -1;
        
    
}
int main(){
    int array[100];
    int n;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int num;
    cout<<"number to be searched:"<<endl;
     cin>>num;
    
    //take input from user.
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    int result = linear_search(array, n, num);
   cout<<"element found at index: " <<result<<endl;
    return 0;
}