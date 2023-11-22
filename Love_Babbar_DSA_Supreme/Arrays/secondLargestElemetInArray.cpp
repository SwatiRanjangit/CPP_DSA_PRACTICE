#include <iostream>
#include<climits>
using namespace std;

int main() {
   int arr[6]={1,2,5,3,7,8};
   int max = INT_MIN;
   int prev;
   for(int i=0;i<6;i++){
       
       if(arr[i] > max){
           prev= max;
           max= arr[i];
       }
   }
   cout<<prev<<endl;
    return 0;
}
