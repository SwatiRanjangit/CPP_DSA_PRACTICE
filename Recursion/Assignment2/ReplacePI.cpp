#include<iostream>
#include<cstring>
using namespace std;

void replacePi(char input[], int start = 0) {
    if (input[start] == '\0' || input[start + 1] == '\0')
        return;

    replacePi(input, start + 1);

    if (input[start] == 'p' && input[start + 1] == 'i') {
        int len = strlen(input);
        cout<<"len"<<len<<endl;
        input[len + 2] = '\0';
        for (int i = len - 1; i >= start + 2; --i) {
            input[i + 2] = input[i];
        }
        input[start] = '3';
        input[start + 1] = '.';
        input[start + 2] = '1';
        input[start + 3] = '4';
    }
}

int main() {
    char s[1000];
    cin.getline(s, 1000);
    replacePi(s);
    cout << s << endl;
    return 0;
}