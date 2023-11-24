// time complexity = O(n)
//Input: arr[]  = {1, 2, 3, 4, 5}
//Output: prod[]  = {120, 60, 40, 30, 24 }
//
#include <iostream>
#include <vector>

using namespace std;

void product(int arr[], int n){
    vector<int> output(n,1);
    int p=1;
    for(int i=0;i<n;i++){
        
        p= p*arr[i];
        
    }
    
    for(int i=0;i<n;i++){
        output[i]=p/arr[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    product(arr,5);
    return 0;
}
