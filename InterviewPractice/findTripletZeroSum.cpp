//BRUTE FORCE 
// Online C++ compiler to run C++ program online
//tc: o(N3)
#include <iostream>
using namespace std;

void findTriplets(int arr[],int n){
    bool found=false;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            
            for(int k=j+1;k<n;k++){
               if(arr[i]+arr[j]+arr[k]==0){
                   cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                   found=true;
               }
            }
        }
        
    }
    if(found == false){
        cout<<"no triplets found"<<endl;
    }
}
   
int main() {
     int arr[] = { 0, -1, 2, -3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr, n);
    return 0;

    return 0;
}

// HASHING APPROACH OPTIMAL
//TC: O(n2)
#include <iostream>
#include<unordered_set>
using namespace std;

void findTriplets(int arr[],int n){
    bool found=false;
    for(int i=0;i<n-1;i++){
        unordered_set<int> s;
        for(int j=i+1;j<n;j++){
            int x = -(arr[i]+arr[j]);
            if(s.find(x) != s.end()){
                cout<<arr[i]<<" "<<arr[j]<<" "<<x<<endl;
                found = true;
            }else{
                s.insert(arr[j]);
            }
            }
        }
    
    if(found == false){
        cout<<"no triplets found"<<endl;
    }
}
   
int main() {
     int arr[] = { 0, -1, 2, -3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr, n);
    return 0;

    return 0;
}