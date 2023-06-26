#include<iostream>
using namespace std;

class Student{
    static int totatlStudents;
    public:
    int roll;
    int age;
    

    Student(){
        totatlStudents++;
    }

    int getRoll(){
        return roll;
    }

    static int getTotalStudent(){
        return totatlStudents;
    }
};
 int Student ::totatlStudents=0;
int main() {
    Student s1;

//    cout<<s1.roll<<" "<<s1.age<<endl;
//    s1.totatlStudents=30;
//    cout<<Student::totatlStudents<<endl;
      Student s2,s3,s4;
      cout<<Student::getTotalStudent()<<endl;


}