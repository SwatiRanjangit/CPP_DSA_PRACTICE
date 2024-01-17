#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m){
//     set<int> mp;
//     vector<int> u;

//   for(int i=0;i<n;i++){
//     mp.insert(arr1[i]);
//     }

   //  for(int i=0;i<m;i++){
   //      mp.insert(arr2[i]);
   //  }

//     for(auto it:mp){
//         u.push_back(it);
//     }

//    return u;

   int i=0,j=0;
   vector<int> u;
   while(i<n && j<m){
      if(arr1[i] <= arr2[j]){
         
      }
   }


    
}

int main(){
     int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
    


}