#include <iostream>
using namespace std;
//TIME COMPLEXITY : O(m+n)

bool isAnagram(string s, string t) {
        // METHOD 1: sorting
    //     sort(s.begin(),s.end());
    //     sort(t.begin(),t.end());
    //   if((s.compare(t))==0){
    //       return true;
    //   }else{
    //       return false;
    //   }

    //METHOD 2: Frequency Table
    int freqTable[256]={0};
    for(int i=0;i<s.length();i++){
        freqTable[s[i]]++;
    }

    for(int i=0;i<t.length();i++){
        freqTable[t[i]]--;
    }

    for(int i=0;i<256;i++){
        if(freqTable[i] != 0){
            return false;
        }
    }
    return true;
 }
int main() {
  
  string  s = "anagram", t = "nagaram";
  bool ans = isAnagram(s,t);
  if(ans){
     cout<<"valid anagram "<<endl;
  }else{
     cout<<"not valid anagram "<<endl;
  }
}