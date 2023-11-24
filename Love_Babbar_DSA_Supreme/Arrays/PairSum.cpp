
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

#include <iostream>
#include<unordered_map>
using namespace std;
void check(int arr[],int n,int sum){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int cur = abs(arr[i]-sum);
       if(mp.find(cur) != mp.end()){
           cout<<arr[i]<<" "<<cur<<endl;
           break;
       }
       mp[arr[i]]=cur;
        
    }
    
   
}

int main() {
   int arr[5]={1,2,3,4,5};
   int sum = 5;
   check(arr,5,sum);

    return 0;
}