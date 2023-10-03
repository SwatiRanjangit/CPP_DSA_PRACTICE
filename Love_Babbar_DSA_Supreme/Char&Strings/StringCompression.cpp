// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int StringCompression(vector<char>& s){
  int count =1,index =0;
  char prev = s[0];

  for(int i=1;i<s.size();i++){
    //check if the previous char and the s[i] is equal then increase count
    if(s[i] == prev){
      count++;
    }else{
      // if the prev and s[i] does not match then place prev to s[index] and then incremnt.
      s[index++] = prev;

      // if count is greater than 1 then s[i] = count 
      if(count > 1){
        int start = index;
        while(count){
          //beacuse we want to store one digit at one index so if count is 14 then we have to stroe it in two index.
          s[index++] = (count % 10)+'0';
          count = count / 10;
        }
        // beause we get result in reverse order to 
        reverse(s.begin()+start,s.begin()+index);
      }
    //in each iteration changing prev to the s[i]
     prev = s[i];
      // reinitlising the prev value
      count =1;
    }
  }

  s[index++] = prev;
  if(count > 1){
    int start = index;
    while(count){
      s[index++] = (count % 10)+'0';
      count = count /10;
    }
  }
  return index;
}


int main() {
vector<char> chars{'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};

int result = StringCompression(chars);
  cout<<"Result is: "<<result<<endl;
  
   return 0;
}