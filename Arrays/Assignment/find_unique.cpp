#include<iostream>
using namespace std;

int find_unique(int arr[], int n){
   int j;
	for(int i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i==j)                             
				continue;
			if(arr[i] == arr[j])
				break;
		}
		if(j == n){
			return arr[i];
		}
	}
}

int main(){
   int n;
   cin>>n;
   int arr[100];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
    cout<<find_unique(arr,n);


   return 0;
}