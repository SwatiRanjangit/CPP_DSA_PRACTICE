// 
#include <iostream>
using namespace std;
int x = 2;

int main() {
    ::x = 4; // changing global varible value
    int x =15;
    cout<<"local main x: "<<x<<endl;
    cout<<"global x inside main: "<<::x<<endl;
    {
        int x = 50;
        cout<<"inside curly scop x: "<<x<<endl;
        cout<<"inside curly scope global x: "<<::x<<endl;
    }
  
    return 0;
}