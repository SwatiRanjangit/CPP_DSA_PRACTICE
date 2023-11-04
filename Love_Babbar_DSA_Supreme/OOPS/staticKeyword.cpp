// in static function we can only access static members. and that function will be common to all the instances of that class.
#include <iostream>
using namespace std;

class abc{
    public:
    static int x,y; // accessible to all the instances created only one copy of this will be provided to all instaces
    
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};


// if we use static varible we have to declare it outside for using it.
int abc::x;
int abc::y;

int main() {
    abc obj1;
    obj1.x=1;
    obj1.y=2;
    obj1.print();
    abc obj2;
    obj2.x=10;
    obj2.y=30;
    obj1.print();
    obj2.print();
    return 0;
}