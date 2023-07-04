#include<iostream>
#include<vector>
using namespace std;

void indices(int arr[],int currIndex, int n, int x, int output[] , int& k ){
    if(currIndex == n)
     return;
    
    if(arr[currIndex] == x){
        output[k] = currIndex;
        k++;
    }
    indices(arr, currIndex+1, n , x , output, k);
     
}

int allIndices(int arr[], int n, int x, int *output){
    int k =0;
    indices(arr,0, n, x, output, k);
    return k;
   
}




int main(){
    int arr[7] = {1,2,3,7,7,5,7};
    int *output = new int[7];
    int size = allIndices(arr, 7, 7,output);
   for(int i =0; i<size;i++){
    cout<<output[i]<<" ";
     }

   delete [] output;

    
    return 0;
}