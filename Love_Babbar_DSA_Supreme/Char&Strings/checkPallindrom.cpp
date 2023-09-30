#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char arr[]) {
  int i = 0;
  int n = strlen(arr);
  int j = n - 1;
  while (i <= j) {
    if (arr[i] != arr[j]) {
      return false;
    } else {
      i++;
      j--;
    }
  }
  return true;
}

int main() {
  char arr[60];
  cin.getline(arr, 60); // Read up to 60 characters
  cout << "initially is: " << arr << endl << endl;
  bool ans = checkPalindrome(arr);

  if (ans) {
    cout << "String is a palindrome" << endl;
  } else {
    cout << "String is not a palindrome" << endl;
  }

  return 0;
}
