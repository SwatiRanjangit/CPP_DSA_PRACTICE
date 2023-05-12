#include<iostream>
#include<climits>
using namespace std;

int second_larget(int arr[], int n){
    if(n<=1)
        return INT_MIN;
    
    int first = INT_MIN , second = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > first){
        second = first;
        first= arr[i];
        } else if(arr[i]==first){
            continue;
        }else if(arr[i] > second){
            second = arr[i];
        }
    }
    return second;

    
}

int main(){
    int arr[] = {2,13,4,1,3,6,28};
    cout<<second_larget(arr,7);
    return 0;
}