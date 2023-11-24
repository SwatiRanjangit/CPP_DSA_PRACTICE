// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
#include<algorithm>

using namespace std;
int maxSum(int arr[],int n){
    int maxi=INT_MIN;
     for(int i=0;i<n;i++){
        int mul=1;
       for(int j=i;j<n;j++){
           mul*=arr[j];
           maxi=max(mul,maxi);
       }
    }
    return maxi;
}

int main() {
    int arr[7]= { 1,2, -2, 3 };
    int res = maxSum(arr,7);
    cout<<res;
    return 0;
}