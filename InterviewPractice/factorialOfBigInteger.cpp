// Online C++ compiler to run C++ program online


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int factorialBig(int num){
   int carry=0;
   vector<int>ans;
   ans.push_back(1);
   for(int i=2;i<=num;i++){
       for(int j=0;j<ans.size();j++){
           int mul=ans[j]*i+carry;
           int digit = mul%10;
           ans[j]=digit;
           carry=mul/10;
       }
       while(carry){
           ans.push_back(carry%10);
           carry=carry/10;
       }
   }
   reverse(ans.begin(),ans.end());
   for(auto x:ans){
       cout<<x<<" ";
   }
   
    
}

int main() {
  int num=50;
    factorialBig(num);


    return 0;
}