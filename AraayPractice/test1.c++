
#include <iostream>
using namespace std;

bool linearSerach(int arr[],int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return true;
        }
    }
    return false;
}
int main() {
    int arr[]={1,2,3,4,5};
    bool res=linearSerach(arr,5,27);
    if(res){
        cout<<"found"<<endl;
    }else{
         cout<<"not found"<<endl;
    }
    return 0;
}
