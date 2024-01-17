#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 3, 4, 5};

    for (int i = 0; i < 6; i++){
       int index = abs(arr[i])-1;
       if(arr[index]>0){
           arr[index]= - arr[index];
           
       }else{
           cout<<"repeating element: "<<abs(arr[i])<<endl;
       }
    }
    

    for (int i = 0; i < 6; i++) {
        if (arr[i] > 0) {
           cout<<"missing element: "<<i+1<<endl;
        }
    }

    // cout << "repeating = " << repeating << endl;
    // cout << "missing = " << missing << endl;

    return 0;
}
