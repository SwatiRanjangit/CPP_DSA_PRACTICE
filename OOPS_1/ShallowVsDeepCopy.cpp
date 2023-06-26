#include<iostream>
#include<cstring>
using namespace std;

class Student{
   int age;
   
    public:
    char* name;
     
    Student(int age, char* name){

        this -> age = age;
        // Shallow Copy
        // this -> name = name;

        // this is a Deep copy
        this -> name = new char[strlen(name)+1];
        strcpy(this -> name, name);
       }

       void display(){
        cout<<"name: "<<name<<" "<<"age: "<<age<<endl;
       }

        //copy constructor
        Student(Student const &s){
        this -> age=s.age;
        // this -> name = s.name;  shallow copy

        //deep copy
        this -> name = new char[strlen(s.name)+1];
        strcpy(this->name,s.name);


        }

};