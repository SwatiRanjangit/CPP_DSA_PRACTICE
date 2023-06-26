#include<iostream>
using namespace std;
#include "Student.cpp"


int main(){
    //Create object statically
    Student s1;
    Student s2;
    s1.rollNo=33;
    // s1.age = 23;

    cout<<"rollno: "<<s1.rollNo<<endl;
    // cout<<"age: "<<s1.age<<endl;
  

     //Create object dynamically
     Student *s3 = new Student;
     Student *s4 = new Student;
    //  (*s3).age = 76;
    s1.display();
    cout<<"s1 age: "<<s1.getAge();

     (*s4).rollNo=87;
     s3 -> rollNo = 55;
    // cout<<"age: "<<(*s3).age<<endl;
    cout<<"rollNo: "<<(*s4).rollNo<<endl;
    cout<<"rollNo: "<<(*s3).rollNo<<endl;
    s3->display();


}