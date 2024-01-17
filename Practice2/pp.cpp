#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;

// int main() {
    // int arr[5] = {1, 2, 3, 4, 5};
    // int n = 5;
    // int k = 3;
    // int min;
    // while (k--) {
    //      min = INT_MAX;
    //     for (int i = 0; i < n; i++) {
    //         if (arr[i] < min) {
    //             min = arr[i];
    //         }
    //     }

    //     // Remove the found minimum from the array
    //     for (int i = 0; i < n; i++) {
    //         if (arr[i] == min) {
    //             arr[i] = INT_MAX; // Mark as visited
    //             break;
    //         }
    //     }
    // }

    // cout << min << endl;
// }


// int main(){
//     int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
//     int n=9;
//     int maxi=INT_MIN;
    
//     for(int i=0;i<n;i++){
//         int sum=sum+arr[i];
//         maxi=max(maxi,sum);
//         if(sum<0) sum=0;

//     }

//     cout<<maxi<<endl;
// }

// int maxProfit(int arr[],int n){
//     int maxPro=0;
//     int minPrice = INT_MAX;

//     for(int i=0;i<n;i++){
//         // if(arr[i]<minPrice){
//         //     minPrice=arr[i];

//         // }
//         minPrice = min(minPrice,arr[i]);
//         maxPro=max(maxPro, arr[i]-minPrice);
//     }
//     return maxPro;
// }

// int main(){

//    int arr[10]={1,0,1,0,2,0,1,2,2,0};
//   int size =10;
//   int s=0;
//   int e=size-1;
// int i=0;
//   while(i<=e){
//     if(arr[i]==0){
//         swap(arr[i],arr[s]);
//         s++;
//         i++;
//         }else if(arr[i]==2){
//        swap(arr[i],arr[e]);
//        e--;
//     }else{
//         i++;
//     }
//   }

//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }
// }

// int main(){
//     int arr[5]={1,2,2,4,5};
//    int n=5;
//    int miss,rep;

//     for(int i=0;i<n;i++){
//         int ind=arr[i]-1;
//         if(arr[i] != arr[ind]){
//             swap(arr[i],arr[ind]);
//         } 
//     }

//     for(int i=0;i<n;i++){
//         if(arr[i] != i+1){
//             cout<<"missing number is: "<<i+1<<endl;
//             cout<<"repaeting number is: "<<arr[i]<<endl;
//             break;
//         }
//     }
// }


int main(){
   int arr[5]={1,2,2,4,5};
   int n=5;
   int miss=-1;
   int rep=-1;
   vector<int> count(n,0);
   for(int i=0;i<n;i++){
        count[arr[i]]++;
   }

   for(int i=0;i<n;i++){
    if(count[i]==0){
        miss=i;
    }else if(count[i] ==2){
        rep=i;
    }
   }

   cout<<"missing: "<<miss<<endl;
   cout<<"repeating: "<<rep<<endl;

}