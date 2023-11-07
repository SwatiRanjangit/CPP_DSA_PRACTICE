#include <iostream>
#include <cstring>
#include<vector>
using namespace std;

void convertLowerCase(char c[]){
  int n = strlen(c);
  for(int i=0;i<n;i++){
    if(c[i] >= 'A' && c[i] <= 'Z'){
      c[i] = c[i]-'A'+'a';
    }
    
  }
}

int main() {
  char arr[60];
  cin.getline(arr, 60); // Read up to 60 characters
  cout << "initially is: " << arr << endl << endl;
  convertLowerCase(arr);
   cout << "String after lower case: " << arr<<endl;

  
  return 0;
}