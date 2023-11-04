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
    public:
    Derived(){
        cout<<"derived constructor"<<endl;
    }
    
    ~Derived(){
        cout<<"derived destructor"<<endl;
    }
};
int main() {
 Base* b = new Derived(); // constructor
 delete b; // destructor

    return 0;
}