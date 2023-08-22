#include<iostream>
#include<climits>
using namespace std;

class Stack{
    int* data;
    int nextIndex;
    int capacity;

    public:
    Stack(){
        data = new int[4];
        nextIndex = 0;
        capacity = 4;

    }

    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex == 0;
    }

    void push(int ele){
        if(nextIndex == capacity){
            int *newData = new int[2* capacity];
            for(int i =0; i<capacity; i++){
                newData[i] = data[i];
            }
            capacity = 2*capacity;
            delete [] data;
            data = newData;


        }

        data[nextIndex] = ele;
        nextIndex;
    }


    int pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top(){
         if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }

        return data[nextIndex-1];
    }
}; 


int main(){
   Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  cout<<s.top()<<endl;
  cout<<s.size()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.pop()<<endl;
  cout<<s.isEmpty()<<endl;

}