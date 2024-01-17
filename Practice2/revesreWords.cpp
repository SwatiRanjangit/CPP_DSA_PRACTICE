#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

// TC AND SC: O(n)
// int main(){
//     // Declare a string containing the input sentence
//     string s="TUF is great for interview preparation";
    
//     // Display the original sentence
//     cout<<"Before reversing words: "<<endl;
//     cout<<s<<endl;
    
//     // Add a space at the end of the string to ensure the last word is processed
//     s+=" ";

//     // Declare a stack to store words
//     stack<string> words;

//     // Declare a string to store characters forming a word
//     string str=" ";

//     // Iterate through each character in the string
//     for(int i=0;i<s.length();i++){
//         // If the character is a space, push the current word onto the stack and reset the word
//         if(s[i]==' '){
//             words.push(str);
//             str=" ";
//         } else {
//             // If the character is not a space, add it to the current word
//             str+=s[i];
//         }
//     }

//     // Declare a string to store the reversed sentence
//     string ans =" ";

//     // Pop words from the stack and concatenate them to the result string
//     while(words.size() != 1){
//         ans+=words.top()+" ";
//         words.pop();
//     }

//     // Add the last word to the result string
//     ans+=words.top();

//     // Display the reversed sentence
//     cout<<"After reversing: "<<ans<<endl;

//     // Return 0 to indicate successful execution
//     return 0;
// }


// better APPROACH:


#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;



//TWO pointers approach TC: O(N) SC: O(1)
string result(string str){
   string temp = "";  // Initialize temp as an empty string
   string ans = "";
   int left = 0;
   int right = str.length() - 1;

   while(left <= right) {
      char ch = str[left];
      if(ch != ' ') {
         temp += ch;
      } else if(ch == ' ') {
         if(ans != "") {
            ans = temp +" "+ ans;
         } else {
            ans = temp;
         }
         temp = "";
      }
      left++;
   }

   // for last string to add
    if (temp != "") {
        if (ans != "") {
            ans = temp + " " + ans;
        } else {
            ans = temp;
        }
    }


   return ans;
}


int main()
{
    string st="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing words: "<<endl;
    cout<<result(st);
    return 0;
}

