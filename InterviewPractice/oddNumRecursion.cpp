// select only odd number from array
#include <iostream>
#include <vector>

using namespace std;

void find(vector<int>& arr,int index,vector<int>& result){
    
    
    if(index == arr.size()){
        return;
    }
    
    if(arr[index]%2 !=0){
        result.push_back(arr[index]);
    }
    
    find(arr,index+1,result);
    
}

int main() {
     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> oddNumbers;

    find(arr, 0, oddNumbers);

    cout << "Odd Numbers in the Array: ";
    for (int num : oddNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

  
}