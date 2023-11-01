#include <iostream>
using namespace std;

int partition (int arr[], int low, int high)
{
    int i= low-1;
    int j= low;
    int pivotIndex = high;
    
    while(j<= pivotIndex){
        if(arr[j] < arr[pivotIndex]){
            ++i;
            swap(arr[i],arr[j]);
        }
        ++j;
    }
    //when the j is out of bound then we will increase i by 1 and then swap the pivotindex to i index that is the right place of that pivot index
    ++i;
    swap(arr[i],arr[pivotIndex]);
    
    //return the ith index where the pivot elemnt is placed
    return i;
      
}


 void quickSort(int arr[], int low, int high)
{
    // Base case
        if(low >= high) return;
        
        // pivot element 
        int p=partition(arr,low,high);
        
        //recursive calls
        //left
        quickSort(arr,low,p-1);
        
        
        //right
        quickSort(arr,p+1,high);
}
    


int main() {
   int arr[9]= { 2, 1, 6, 10, 4, 1, 3, 9, 7};
   int n= 9;
   int low = 0;
   int high = n-1;
   quickSort(arr,low,high);
   
   // after sorting
   for(int i=0; i< n;i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}