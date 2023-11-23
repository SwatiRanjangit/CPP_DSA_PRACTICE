#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 3, 3};

    for (int i = 0; i < 5; i++) {
        int count = 0;
        bool isprinted=false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isprinted = true;
                break;
            }
            
        }
        
        if(!isprinted){
            for(int j=0;j<5;j++){
                 if (arr[i] == arr[j]) {
                    count++;
                }
            }
        }
        
        if (count > 1) {
            cout << arr[i] << endl;
        }
    }

    return 0;
}
