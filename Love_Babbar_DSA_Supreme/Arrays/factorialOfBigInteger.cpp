#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fact(int num){
    int carry =0;
    vector<int> ans;
    ans.push_back(1);

    // start from 2 so and in vector array there is 1 so in 1st iteration 1 * 2 + 0 = 2 and s0 
    for(int i=2;i<=num;i++){
        for(int j=0;j<ans.size();j++){
            int mul = ans[j] * i + carry;
            int digit = mul %10;
            ans[j]=mul%10;
            carry = mul/10;
        }
        while(carry){
        ans.push_back(carry%10);
        carry=carry/10;
    }
    }
    
    
     reverse(ans.begin(),ans.end());
    for(auto x: ans){
        cout<<x<<" ";
    }
}
int main() {
    int num=50;
    fact(num);

    return 0;
}