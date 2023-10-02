#include <iostream>
#include<climits>
using namespace std;

string reorganizeString(string s) {
        int hash[26]={0};
      
      //mapping 0 to char a(97) and till z.
        for(int i=0;i<s.size();i++){
            hash[s[i] - 'a']++; 
        }

        // variables
        char most_freq_char;  // store the char  of most occuring char
        int max_Freq=INT_MIN; // store maximum frequency of most occuring char in the string
    
    // finding most occuring char in the string
        for(int i=0;i<26;i++){
            if(hash[i]>max_Freq){

                max_Freq = hash[i];
                most_freq_char = i + 'a';
            }
        }

        int index = 0; // inital value of index =0

         
    // placing the most occuring char in the string  condition that till max freq is  > 0 and index size is less than size of string
        while(max_Freq > 0 && index < s.size()){
            s[index] = most_freq_char;
            max_Freq--;
            index+=2; //place one char space the other char
        }

    // if most occuring char can't be placed in one go means max_freq is still not 0 then it means that we can't rearrange it.
        if(max_Freq != 0){
            return "";
        }

// place other remaing char of the string 
        for(int i=0;i<26;i++){
            while(hash[i] > 0){
                index = index > s.size() ? 1 : index; // if the index when last max freq is placed the increase and it goes out of bound then again make index = 1 otherwise let it be.
                s[index] = i + 'a';
                hash[i]--;  // after placing each reaming char decrese hash
                index+=2;
            }
        }
        return s;
 }

int main() {
 string s = "aab";
string res =reorganizeString(s);
  cout<<"result is: "<<res<<endl;
  
}