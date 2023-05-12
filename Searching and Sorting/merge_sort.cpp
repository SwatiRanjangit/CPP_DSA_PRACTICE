#include<iostream>
using namespace std;

void merge_two_sorted_array(int arr1[],int arr2[], int m, int n, int arr3[]){
    int k=0,i=0,j=0;
   while(i<m && j<n){
        if(arr1[i] < arr2[j]){
              arr3[k++] = arr1[i++];
        }else{
          arr3[k++] = arr2[j++];
        }
    }

    while(i<m){
        arr3[k++]= arr1[i++];
    }

     while(j<n){
        arr3[k++]= arr2[j++];
    }
   }
   

int main(){
    int arr1[]={1,2,4,5,9};
    int arr2[]={3,6,7,8};
    int arr3[100];
    merge_two_sorted_array(arr1,arr2,5,4,arr3);
    for(int i=0;i<9;i++){
        cout<<arr3[i]<<" ";
    }
   
    return 0;
}