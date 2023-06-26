#include<iostream>
#include<vector>
using namespace std;

int sumOfArray(int arr[], int n){
    if(n==0)
     return 0;
    
    return  arr[0] + sumOfArray( arr+1 , n-1 );

}


int main(){
    int arr[5] = {1,2,3,7,5};
    int result =sumOfArray(arr, 5);
    cout<<result<<endl;

    
    return 0;
}