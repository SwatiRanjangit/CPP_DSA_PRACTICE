// constructor and destructor
// we can't make constructor virtual but descrtuctor should always made virtual if not made then  only base clss destructor wil be called not derived class.
#include <iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"base constructor"<<endl;
    }
    
    virtual ~Base(){
        cout<<"base desctructor"<<endl;
    }
};

class Derived :public Base{
    int *a;
    public:
    Derived(){
        a = new int[1000];
        cout<<"derived constructor"<<endl;
    }
    
    ~Derived(){
        delete[] a;
        cout<<"derived destructor"<<endl;
    }
};
int main() {
 Base* b = new Derived(); // constructor
 delete b; // destructor

    return 0;
}