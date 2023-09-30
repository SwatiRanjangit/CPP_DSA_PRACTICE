#include <iostream>
#include <cstring>
using namespace std;

void convertUpperCase(char arr[]) {
  
  int n = strlen(arr);
  for(int i=0;i<n;i++){
    arr[i]=arr[i]-'a'+'A';
  }
}

int main() {
  char arr[60];
  cin.getline(arr, 60); // Read up to 60 characters
  cout << "initially is: " << arr << endl << endl;
  convertUpperCase(arr);
   cout << "String after upper case: " << arr<<endl;


  return 0;
}
