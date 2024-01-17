


#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
//tc: o(n3)
// int main(){
//     int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
//     int max=INT_MIN;
//     for(int i=0;i<9;i++){
//         for(int j=i;j<9;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                  sum+=arr[k];
                

//             }
//             if(sum > max){
//                     max=sum;
//                 }
//         }
//     }
//     cout<<max<<endl;
// }

//tc: o(n2)
// int main(){
//     int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
//     int max=INT_MIN;
//     for(int i=0;i<9;i++){
//          int sum=0;
//         for(int j=i;j<9;j++){
//            sum+=arr[j];
//            max = max > sum ? max : sum;
            
//         }

       
//     }
//     cout<<max<<endl;
// }

//TC: O(N) Kaden's algo

int maxSub(int arr[],int n){
  int sum=0;
  int maxi=arr[0];
  for(int i=0;i<n;i++){
    sum+=arr[i];
    maxi=max(sum,maxi);
    if(sum<0){
        sum=0;
    }

  }
  return maxi;
}
int main(){
       int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
       cout<<maxSub(arr,9);

}