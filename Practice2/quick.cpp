// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int partion(int arr[],int l,int h){
    int pivot = arr[h];
    int i=l;
    for(int j=l;j<h;j++){
        if(arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[h]);
    return i;
}

void quickSort(int arr[],int l,int r){
    if(l<r){
        int pi=partion(arr,l,r);
        
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);

    }
}
int main() {
     int arr[] = {12, 11, 13, 5, 6, 7};
     int length= sizeof(arr)/sizeof(arr[0]);
     
     
    cout << "Original array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    quickSort(arr, 0, length - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}