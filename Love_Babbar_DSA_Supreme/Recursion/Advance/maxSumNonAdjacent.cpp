#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void Solve(vector<int>& arr, int i,int sum,int& maxi) {
 
   if(i>=arr.size()){
       maxi = max(maxi,sum);
       return;
    } 

   // include
    Solve(arr,i+2,sum+arr[i],maxi);

   //exclude
   Solve(arr,i+1,sum,maxi);

}

int main() {
   vector<int> arr{2,1,4,9};
   int i=0;
   int sum=0;
  int maxi=INT_MIN;
  Solve(arr,i,sum,maxi);

  cout<<"Maximum number of cutting is: "<<maxi<<endl;


}
