
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int findMaxConsecutiveOnes(vector<int> arr){
    int count=0;
    int curr=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            curr++;
            count = max(count,curr);
        }else{
            curr =0;
        }
    }
    return count;
}

int main() {
     vector<int> binaryArray = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1};
    
    int result = findMaxConsecutiveOnes(binaryArray);

    cout << "Maximum consecutive ones: " << result << endl;

    return 0;
}