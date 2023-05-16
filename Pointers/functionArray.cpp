#include<iostream>
using namespace std;

int sum(int* a, int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans+=a[i];
    }
    return ans;
}

int main(){
   int a[]={1,2,3,4,5};
   cout<<sum(a,5)<<endl;
   cout<<sum( a+1 ,4);
   return 0;

}