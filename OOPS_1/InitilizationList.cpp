#include<iostream>
using namespace std;

class Student{
    public:
    int age;
    const int rollNumber;
    int &x;

    Student(int r, int age): rollNumber(r), age(age), x(this -> age){
         
    }
};

int main(){
    Student i1(101,23);
    cout<<i1.age<<endl;
    cout<<i1.rollNumber<<endl;
    cout<<i1.x<<endl;
}