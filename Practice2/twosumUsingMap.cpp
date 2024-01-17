#include <iostream>
#include <unordered_set>
using namespace std;

void printPairs(int arr[], int n, int sum) {
	unordered_set<int> s;
	for(int i=0;i<n;i++){
        int x = arr[i];
        int y = sum - arr[i];

        if(s.find(y) != s.end()){
            cout<<"["<<y<<","<<x<<"]"<<endl;
        }
        s.insert(arr[i]);

    }
}

int main() {
	int arr[] = {1, 5, 7, -1, 5};
	int sum = 6;
	int n = sizeof(arr)/sizeof(arr[0]);
	printPairs(arr, n, sum);
	return 0;
}
