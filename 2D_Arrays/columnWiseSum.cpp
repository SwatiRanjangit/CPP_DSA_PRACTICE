#include<iostream>
using namespace std;

int main(){
    int arr[100][100];
    int m,n;
    cin>>m>>n;
    cout<<"taking input of 2D array: "<<endl;
    for(int row=0;row<m;row++){
        for(int col=0; col<n; col++){
            cin>>arr[row][col];
        }
    }



  cout<<"printing array row wise: "<<endl;
     for(int row=0;row<m;row++){
        for(int col=0; col<n; col++){
            cout<<arr[row][col]<<" ";
        }cout<<endl;
    }
    cout<<"sum of col wise:"<<endl;
     for(int col=0; col<n; col++){
        int sum =0;
        for(int row=0;row<m;row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    
    
}