#include<iostream>
#include<vector>
using namespace std;
inline int max(int a, int b){
    return (a>b) ? a : b;
}
int main(){
    int a=12;
    int b = 10;
    int c = max(a,b);
    return 0;

}