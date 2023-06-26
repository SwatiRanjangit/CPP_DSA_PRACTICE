#include<iostream>
#include<vector>
using namespace std;

bool isSorted2(int arr[], int n){

    if(n==0 || n==1)
     return true;

    
    bool smallSorted = isSorted2(arr+1, n-1);
    if(!smallSorted)
     return false;
    
    if(arr[0] > arr[1]){
        return false;
    }else{
        return true;
    }
    

}

bool isSorted(int arr[], int n){

    if(n==0 || n==1)
     return true;

    if(arr[0] > arr[1])
     return false;
    
    bool smallSorted = isSorted(arr+1, n-1);
    return smallSorted;
    // if(smallSorted)
    //  return true;
    // else 
    //   return false;

}



int main(){
    int arr[5] = {1,2,3,7,5};
    bool result = isSorted(arr, 5);
    if(result){
    cout<<"array is sorted"<<endl;
    }
    else {
      cout<<"array is not  sorted"<<endl;
    }

    bool result2 = isSorted2(arr, 5);
    cout<<result2<<endl;

    
    return 0;
}