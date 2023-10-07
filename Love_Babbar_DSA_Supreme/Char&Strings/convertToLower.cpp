#include <iostream>
#include <cstring>
using namespace std;

void convertLowerCase(char arr[]) {
    int n= strlen(arr);
  for(int i=0;i<n;i++){
      arr[i] = arr[i]-'A'+'a';
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
