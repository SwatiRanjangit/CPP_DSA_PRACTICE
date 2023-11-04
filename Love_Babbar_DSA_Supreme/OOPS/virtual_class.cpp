
#include <iostream>
using namespace std;
class Bird{
    public:
    virtual void eat(){
        cout<<"eating"<<endl;
    }
    
    void sleep(){
        cout<<"sleeping"<<endl;
    }
};

class Parrot :public Bird{
    void eat(){
        cout<<"sparrow eating"<<endl;
    }
};
int main() {
 Bird* b = new Parrot();
 b->eat();
 b->sleep();

    return 0;
}