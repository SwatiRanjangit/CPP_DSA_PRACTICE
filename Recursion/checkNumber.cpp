#include<iostream>
#include<vector>
using namespace std;


bool checkNumber(int arr[], int n, int x){

    if(n==0)
     return false;
  
    if(arr[0]==x)
     return true;
    
    return checkNumber(arr+1 , n-1, x);
     
}


int main(){
    int arr[5] = {1,2,3,7,5};
    int x;
    cin>>x;
    bool result = checkNumber(arr, 5, x);
    if(result){
    cout<<"present"<<endl;
    }
    else {
      cout<<"not present"<<endl;
    }

    
    return 0;
}

