#include<iostream>
#include<climits>
using namespace std;

void spiralPrint(int arr[][100], int m, int n){
    int count =0;
    int total = m * n;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = m-1;
    int endingCol = n-1;

    while(count < total){
        //printing starting row
        for(int i = startingCol; count<total && i<=endingCol; i++){
            cout<<arr[startingRow][i]<<" ";
            count++;
        }
        startingRow++;
        
         //printing ending col
         for(int i = startingRow; count<total && i<=endingRow; i++){
            cout<<arr[i][endingCol]<<" ";;
            count++;
        }
        endingCol--;

         //printing ending row
         for(int i = endingCol; count<total && i>=startingCol; i--){
            cout<<arr[endingRow][i]<<" ";;
            count++;
        }
        endingRow--;

         //printing starting col
        for(int i = endingRow; count<total && i>=startingRow; i--){
            cout<<arr[i][startingCol]<<" ";;
            count++;
        }
        startingCol++;

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
    spiralPrint(arr,m,n);
    return 0;
}