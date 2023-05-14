#include<iostream>
#include<climits>
using namespace std;

void waveprint(int arr[][100], int row, int col){
    for(int i=0; i<col;i++){
        if(i % 2 == 0){
            for(int j=0; j<row;j++){
                cout<<arr[j][i]<<" ";
            }
        }else{
            for(int j = row-1; j >= 0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

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
    waveprint(arr,m,n);
    return 0;
    
}