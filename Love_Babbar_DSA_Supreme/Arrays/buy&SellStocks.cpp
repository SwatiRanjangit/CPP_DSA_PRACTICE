#include <iostream>
#include<unordered_map>
using namespace std;
int maxProfit(int arr[],int n){
  int buy=arr[0], max_profit=0;
  for(int i=1;i<n;i++){
      if(buy > arr[i]){
          buy=arr[i];
      }else if(arr[i]-buy > max_profit){
          max_profit = arr[i]-buy;
      }
      
      
  }
  return max_profit;
   
}

int main() {
   int price[6]={7, 1, 5, 3, 6, 4};
   int res = maxProfit(price,6);
   cout<<"result is: "<<res<<endl;

    return 0;
}