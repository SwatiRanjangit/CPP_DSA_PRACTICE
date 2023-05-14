#include<iostream>
#include<climits>
using namespace std;

void findLargest(int arr[][100], int row, int col){
    int i,j,sum =0;
    int tempR = INT_MIN;
    int maxRow= 0, maxR=0;
    // finding each row sum
    for(i=0; i<row; i++){
        for(j=0; j<col;j++){
            sum+=arr[i][j];
        }
        // finding the greatest row
        if(sum > tempR){
            maxRow = sum;
            maxR = i;
            tempR = maxRow;

        }
        // Reset the sum
        sum =0;

    }

     i,j,sum =0;
    int tempC = INT_MIN;
    int maxCol= 0, maxC=0;
    // finding each col sum
    for(i=0; i<col; i++){
        for(j=0; j<row;j++){
            sum+=arr[i][j];
        }
        // finding the greatest row
        if(sum > tempC){
            maxCol = sum;
            maxC = i;
            tempC = maxCol;

        }
        // Reset the sum
        sum =0;

    }

    //comparing row and col sum 
    if(maxRow > maxCol){
        cout<<"row "<<maxR<<" "<<maxRow<<endl;
    }else if(maxRow < maxCol){
        cout<<"col "<<maxC<<" "<<maxCol<<endl;
    }else{
        cout<<"row "<<maxR<<" "<<maxRow<<endl;
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
    findLargest(arr,m,n);
    return 0;
}