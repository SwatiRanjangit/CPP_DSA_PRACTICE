#include <iostream>
using namespace std;

class Student{
  private:
  int dist;

  
  friend int addFive(Student);

  public:

        Student() : dist(20) {}

};

int addFive(Student s){
  s.dist+=5;
  return s.dist;
}
int main() {
 Student s;
 cout<<"Distance: "<<addFive(s);

  return 0;
}