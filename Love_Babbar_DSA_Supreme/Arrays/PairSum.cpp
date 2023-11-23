
//TIME COMPLEXITY FOR THIS APPROACH IS O(n * log(n))
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void pairSum(vector<int> arr,int n,int sum){
    sort(arr.begin(),arr.end());
   for(int i=0;i<n;i++){
       if(arr[i]+arr[i+1] == sum){
           cout<<arr[i]<<" "<<arr[i+1]<<endl;
       }
   }
}
int main() {
  vector<int> v{1,3,5,7,9};
  int n = v.size();
  int sum=8;
  
  pairSum(v,n,sum);
}

// TIME COMPLEXITY FOR THIS APPROACH IS: O(n^2)
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   int arr[]={1,3,5,7,9};
//   int size1=5;
//   int sum=8;

//   for(int i=0;i<size1;i++){
//    for(int j=i+1;j<size1;j++){
//      if(arr[i]+arr[j]==sum){
//        cout<<arr[i]<<" "<<arr[j]<<endl;
       

//      }
//    }
//   }
// }


// best APPROACH

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

void pairSum(vector<int> arr, int n, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (mp.find(complement) != mp.end()) {
            cout << "Pair found: (" << complement << ", " << arr[i] << ")" << endl;
        }

        mp[arr[i]] = i; // Store the current element and its index in the map
    }
}

int main() {
    vector<int> v{1, 3, 5, 7, 9};
    int n = v.size();
    int sum = 8;

    pairSum(v, n, sum);

    return 0;
}
