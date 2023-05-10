#include<iostream>
#include<climits>
using namespace std;

void find_intersection(int arr1[], int arr2[], int m, int n){
    int j;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                 arr2[j] = INT_MIN;
            }
        }
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    int arr1[100];
    int arr2[100];

    for(int i = 0; i<m;i++){
        cin>>arr1[i];
    }

     for(int i = 0; i<n;i++){
        cin>>arr2[i];
    }
    find_intersection(arr1,arr2,m,n);

}