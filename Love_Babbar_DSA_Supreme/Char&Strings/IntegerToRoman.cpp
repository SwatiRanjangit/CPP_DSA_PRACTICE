
#include <iostream>
using namespace std;

string intToRoman(int num) {
        string romanSymbol[] = 
        int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans="";
        for(int i=0;i<13;i++){
            while(num >=values[i]){
               ans+=romanSymbol[i];
               num-=values[i];
            }
        }
        return ans;
  }
int main() {
   int num = 58;
   
   string ans = intToRoman(num);
   cout<<"Roman value of "<<num<<" is "<<ans<<endl;
    return 0;
}