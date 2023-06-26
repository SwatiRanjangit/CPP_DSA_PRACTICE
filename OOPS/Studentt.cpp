#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){
    Student s1; //Constructor 1 called
    Student s2(20); //Constructor 2 called
    Student s3(45,654); //Constructor 3 called
    Student s4(s3); //Copy Constructor  called
    s1 = s2; //Copy assignment operator
    Student s5=s4; //copy constructor
}