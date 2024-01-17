// #include <iostream>
// #include<vector>
// using namespace std;
// // Marking method: 
// int main() {
//  int arr[]={1,3,3,5,6};
//   int size =5;
//   for(int i=0;i<size;i++){
//     int index = abs(arr[i]);
//     if(arr[index - 1]>0){
//       arr[index-1]*=-1;
//     }
//   }
//   for(int i=0;i<size;i++){
   
//     if(arr[i]>0){
//        cout<<i+1<<" ";
//     }
//   }
  
// }


#include <iostream>
#include<vector>
using namespace std;
//sort and swap method
int main() {
 int arr[]={1,3,3,5,4};
  int size =5;
  int i=0;
  //loop for storing the elements in thier index suppose 1 to 1st index and 2 to 2nd index.
  while(i<size){
    int index = arr[i]-1;
       if(arr[i] != arr[index]){
         swap(arr[i],arr[index]);
   }else{
     i++;
   }
  }

  for(int i=0;i<size;i++){
   if(arr[i]!= i+1){
      cout<<i+1<<" ";
   }
  }
  
}