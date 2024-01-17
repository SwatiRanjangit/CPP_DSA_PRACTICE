#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateMatrix(vector<vector<int> >&arr, int s){
    // transpose of matrix
    for(int i=0;i<s;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    //reverse rows
    for(int i=0;i<s;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}
int main(){
    vector<vector<int> >arr{{1,2,3},{4,5,6},{7,8,9}};
    int s=arr.size();
    cout<<"before: "<<endl;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotateMatrix(arr,s);
    cout<<"after: "<<endl;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}