#include<iostream>
using namespace std;

void print2D(int arr[][4], int m, int n){
  for(int row=0;row<m;row++){
        for(int col=0; col<n; col++){
            cout<<arr[row][col]<<" ";
        }cout<<endl;
    }
}
int main(){
    int arr[][4] = {{1,2},{3,4}};
    print2D(arr,2,4);
    /*
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
    print2D(arr,m,n);

    cout<<"printing array column wise: "<<endl;
     for(int col=0; col<n; col++){
        for(int row=0;row<m;row++){
            cout<<arr[row][col]<<" ";
        }cout<<endl;
    }
    */
}