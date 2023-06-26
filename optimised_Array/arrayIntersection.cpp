#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void arrayIntersection(int arr[], int arr1[], int n1, int n2){
   sort(arr , arr+n1);
   sort(arr1 , arr1+n2);

   int i=0, j=0;
   while(i<n1 && j<n2){
    if(arr[i] == arr1[i]){
        cout<<arr[i]<<" ";
        i++;
        j++;
    }else if(arr[i] < arr1[i]){
        i++;
    }else{
        j++;
    }
   }



}

int main(){
    int arr[100],arr1[100],n1,n2;
    cin>>n1>>n2;
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr1[i];
    }
    arrayIntersection(arr,arr1,n1,n2);
    return 0;

}