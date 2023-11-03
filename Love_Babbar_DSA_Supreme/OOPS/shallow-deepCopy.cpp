/*
printing a: 
x is: 1
PTR Y is: 0x2148eb0
data of y: 2printing b: 
x is: 1
PTR Y is: 0x21492e0
data of y: 2

after change printing b: 
x is: 1
PTR Y is: 0x21492e0
data of y: 20

after change printing a: 
x is: 1
PTR Y is: 0x2148eb0
data of y: 2

*/
#include <iostream>
using namespace std;

class abc {
    public:
    int x;
    int* y;
    
    // new way : initilizer list
    abc(int a, int b): x(a),y(new int(b)){}
    
    
    //DEFAULT:  SHALLOW COPY problem we face on shallow copy is: when we change the value of one value then it will also change in another as well if we delete the pointer then others will be not able to access it so it will give error.
    
    // abc(const abc &obj){
    //     x = obj.x;
    //     y = obj.y;
    // } 
    
    
    //DEEP COPY 
    abc(const abc &obj){
        x = obj.x;
        y = new int(*obj.y);
    } 
    
    void print() const
    {
        cout<<"x is: "<<x<<endl;
        cout<<"PTR Y is: "<<y<<endl;
        cout<<"data of y: "<<*y<<endl;
    }
};
int main() {
    
    abc a(1,2);
    cout<<endl<<"printing a: "<<endl;
    a.print();
    
    abc b=a;
    cout<<endl<<"printing b: "<<endl;
    b.print();
    *b.y=20;
    cout<<endl<<"after change printing b: "<<endl;
    b.print();
     cout<<endl<<"after change printing a: "<<endl;
     a.print();
     
    

    return 0;
}