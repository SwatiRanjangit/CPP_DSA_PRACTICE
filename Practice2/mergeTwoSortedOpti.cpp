#include<iostream>
#include<algorithm>
using namespace std;


void merge(int arr1[],int arr2[], int n, int m){
    int i=n-1;
    int j=0;

    while(i>=0 && j<m){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }else{
           break;
        }
    }

    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
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