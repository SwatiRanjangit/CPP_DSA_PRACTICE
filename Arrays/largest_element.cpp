#include<iostream>
#include<climits>
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
    cout<<"array elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

    int max= INT_MIN;
    for(int i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    cout<<"max element is : "<<max<<endl;
    return 0;
}