#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 3, 4, 5};
    int temp[6] = {0};
    int repeating = -1;
    int missing = -1;

    for (int i = 0; i < 6; i++) {
        temp[arr[i] - 1]++;
        if (temp[arr[i] - 1] > 1) {
            repeating = arr[i];
        }
    }

    for (int i = 0; i < 6; i++) {
        if (temp[i] == 0) {
            missing = i + 1;
            break;
        }
    }

    cout << "repeating = " << repeating << endl;
    cout << "missing = " << missing << endl;

    return 0;
}
