#include<iostream>
#include<vector>
using namespace std;

int sum(int arr[], int n, int s=0){
    int ans=0;
    for(int i =s; i<n;i++){
        ans+=arr[i];
    }
    return ans;
}

int sum2(int a, int b, int c = 0, int d =0){
    return a+b+c+d;
}
int main(){
    int arr[10],n;
    cin>>n;
    cout<<sum(arr,n)<<endl;
    cout<<sum2(2,3)<<endl;
    return 0;

}