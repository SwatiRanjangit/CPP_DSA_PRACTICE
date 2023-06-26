#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){
    Student s1(10,1002);
    Student s2(34,1082);

    Student *s3 = new Student(45,7838);
    s2 = s1;
    *s3 = s1;
    s2 = *s3;
    delete s3; // we have to delete s3 explicitily because s3 is dynamically created.

    //Destructor
    /*
      * Same name as our class
      * no return type
      * no input arguments
    
    /*
    Student s1(34,782);
    cout<<"s1: ";
    s1.display();

    Student s2(s1);
     cout<<"s2: ";
    s2.display();

    Student *s3 = new Student(33,7822);
    cout<<"s3: ";
    s3->display();

    Student *s4 = new Student(*s3);
     cout<<"s4: ";
    s4->display();
    */


}