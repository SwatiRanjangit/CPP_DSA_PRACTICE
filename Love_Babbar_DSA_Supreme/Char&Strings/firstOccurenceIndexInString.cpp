// Online C++ compiler to run C++ program online
//TC: O(mn)
#include <iostream>
using namespace std;

 int strStr(string haystack, string needle) {
        //SLIDING WINDOW APPROACH
        int n = haystack.size();
        int m = needle.size();

        for(int i=0;i<=n-m;i++){
            for(int j=0;j<m;j++){
                if(needle[j] != haystack[i+j]){
                    break;
                }

                if(j == m-1){
                   return i;
                }
            }
        }

     return -1;
    }
int main() {
   string haystack = "sadbutsad", needle = "sad";
   int ans = strStr(haystack,needle);
   cout<<"Answer is: "<<ans<<endl;

    return 0;
}