// Online C++ compiler to run C++ program online
//BRUTE FRORCE APPROACH
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


// OPTIMAL APPROACH

#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int maxProduct(int arr[], int n) {
   
    int ans=arr[0];
     int maxi = ans ;
    int mini = ans;
    
    for (int i = 1; i < n; i++) {
        if(arr[i]<0){
            swap(maxi,mini);
        }
       maxi = max(arr[i],maxi*arr[i]);
       mini=min(arr[i],mini*arr[i]);
       
       ans = max(ans,maxi);
    }

    return ans;
}

int main() {
    int arr[7] ={ 1, -2, -3, 0, 7, -8, -2 };
    int res = maxProduct(arr, 7);
    cout << res;
    return 0;
}
