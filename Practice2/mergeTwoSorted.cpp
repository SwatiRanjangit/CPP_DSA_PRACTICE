#include<iostream>
using namespace std;


void merge(int arr1[],int arr2[], int n, int m){
    int s=n+m;
     int arr3[s];
     int i=0, j=0, k=0;
     while(i<n && j<m){
       if(arr1[i]<arr2[j]){
        arr3[k++]=arr1[i++];
       }else{
        arr3[k++]=arr2[j++];
       }
     }

     while(i<n){
        arr3[k++]=arr1[i++];
     }

     while(j<m){
        arr3[k++]=arr2[j++];
     }


     for(int i=0;i<n;i++){
        arr1[i]=arr3[i];
     }

     for(int i=0;i<m;i++){
        arr2[i]=arr3[i+n];
     }
}

int main(){
    int arr1[] = {1, 4, 8, 10};
    int arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}