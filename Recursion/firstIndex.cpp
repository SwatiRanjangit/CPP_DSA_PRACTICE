#include<iostream>
#include<vector>
using namespace std;

int firstIndex(int arr[], int n, int x){    
    if(n == 0)
     return -1;
    
    if(arr[0] == x)
      return 0;
    
    int ans = firstIndex(arr+1 , n-1, x);  
    if(ans != -1){
         return ans+1;
    }else{
        return -1;
    }
}


int main(){
    int arr[6] = {1,2,3,7,7,5};
    int x;
    cin>>x;
    int result = firstIndex(arr, 6, x);
   cout<<"first index is: "<<result<<endl;

    
    return 0;
}