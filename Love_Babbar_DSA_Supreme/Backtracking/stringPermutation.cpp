// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printPermutation(string& str, int i){
    if(i>=str.length()){
        cout<<str<<" ";
     return;
    }
    
    //swap
    for(int j=i;j<str.length();j++){
        // swap
        swap(str[i],str[j]);
        
        //recursive call for others
        printPermutation(str,i+1);
        
        //backtracking
        swap(str[i],str[j]);
    }
    
}

int main() {
    string str = "abc";
    int i=0;
    printPermutation(str,i);
    
    return 0;
}