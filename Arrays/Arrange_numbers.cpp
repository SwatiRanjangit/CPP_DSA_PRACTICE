#include<iostream>
using namespace std;

void Arrange(int arr[], int n){
        
        if(n%2==0){
            for(int i = 0; i < n; i++){
                if(i < n / 2)
                    arr[i] = 2*i+1;
                else arr[i] = (n - i) * 2;
            }
        }
        else{
            for(int i = 0; i < n; i++){
                if(i <= n / 2)
                    arr[i] = 2*i+1;
                else arr[i] = (n - i) * 2;
            }
        }
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    Arrange(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}