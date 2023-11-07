/*
INTIALLY when we use inbuilt SORT function then it works in ascending order if we want to sort in order defined by me 
then i have me make a custome means own comparaot and pas into sort function.


OUTPUT: s is: wtsia
7 4 3 2 1 

*/

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(char first, char last){
    return first > last;
}

bool compare(int a, int b){
    return a>b;
}
int main() {
   string s="swati";
   sort(s.begin(),s.end(),cmp);
   cout<<"s is: "<<s<<endl;
   
   vector<int> v{4,2,3,1,7};
   sort(v.begin(),v.end(),compare);
   for(auto i:v){
       cout<<i<<" ";
   }
   

    return 0;
}