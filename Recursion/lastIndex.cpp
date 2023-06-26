#include<iostream>
#include<vector>
using namespace std;

int lastIndex(int arr[], int n, int x){    
    if(n == 0)
     return -1;
    
    int ans = lastIndex(arr+1 , n-1, x); 

    if(ans != -1){
         return ans+1;
    }
     
    if(arr[0] == x)
      return 0;
    else 
      return -1;
   
     
    
}


int main(){
    int arr[7] = {1,2,3,7,7,5,7};
    int x;
    cin>>x;
    int result = lastIndex(arr, 7, x);
   cout<<"last index is: "<<result<<endl;

    
    return 0;
}