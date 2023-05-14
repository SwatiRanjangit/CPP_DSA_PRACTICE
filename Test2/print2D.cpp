#include<iostream>
#include<cstring>
using namespace std;

void print2D_Array(int arr[][100], int row, int col){
    int k = row;
   for(int i=0; i<row;i++){
    for(int l=k-1; l>=0; l--){
    for(int j=0; j<col;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
   }
   k--;

   }
}

int main(){
    int arr[100][100];
    int m, n;
    cin>>m>>n;
    cout<<"taking input of 2D array: "<<endl;
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"printing 2D array: "<<endl;
    print2D_Array(arr,m,n);
}