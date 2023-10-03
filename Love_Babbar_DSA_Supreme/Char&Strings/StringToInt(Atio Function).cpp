// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>

using namespace std;

int MyAtio(string s){
    int num=0, i=0, sign =1;
    
    while(s[i]==' '){
        i++;
    }
    
    // check the sign
    if(i < s.size() && (s[i] == '+' || s[i]=='-')){
        sign = s[i] == '+' ? 1 : -1;
        ++i;
    }
    
    //if after finding sign if there any string found of digit
    while(i<s.size() && isdigit(s[i])){
        
        //condition to check for out of bound
        if(num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7')){
            return sign == -1 ? INT_MIN : INT_MAX;
        }
        
        // if it is not out of bound
        num = num * 10 + (s[i] - '0');
        ++i;
    }
    
    //return the number with sign
    return num*sign;
}

int main() {
   string  s = "4193 with words";
   int ans = MyAtio(s);
   cout<<"Answer is: "<<ans<<endl;
   return 0;
}