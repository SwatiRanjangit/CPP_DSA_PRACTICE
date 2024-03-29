// Online C++ compiler to run C++ program online
//TC(Avg): O(n log(n))
//TC(worst): O(n2)
#include <iostream>
#include<vector>
using namespace std;

int pivotElement(int arr[], int s,int e){
    // 1. choose pivot index
    int pivotIndex = s;
    int pivotEle = arr[s];
    
    //2. place pivot ele to it's right pos
    int count = 0;
    for(int i=s+1; i<=e;i++){
        if(arr[i] <= pivotEle){
            count++;
        }
    }
    
    //here we'll have the number of ele that is less that pivot so swap pivot element with arr[count] to place in right place
    int rightIndex = s + count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex = rightIndex;
    
        // now we will check whether any ele that is in left of pivot is lesser or greater if greater then swap
    
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        //if there is elemnt that is lesser than pivot in left
        while(arr[i]<=pivotEle){
            i++;
        }
        //if there is element that is greater than pivot in right side
        while(arr[j] > pivotEle){
            j--;
        }
        
         // if there is some ele that is greater in left or lesser in right then need to swap
        if(i<pivotIndex && j>pivotIndex)
         swap(arr[i],arr[j]);
    }
    
    return pivotIndex;
    
    
}

void quickSort(int arr[],int s, int e){
    if(s >= e) return;
    
    //particing logic
    int p = pivotElement(arr,s,e);
    
    //recursive calls
    //left part
    quickSort(arr,s,p-1);
    
    //right part
    quickSort(arr,p+1,e);
}

int main() {
    int arr[7]={4,5,2,3,1,10,8}; 
    int s=0;
    int n=7;
    int e=n-1;
    
   quickSort(arr,s,e);
   
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    
    
    
   

    return 0;
}