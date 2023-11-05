// linked list without taking input from user..
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
};

void print(Node* head){
    
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main() {
 Node* first = new Node(10);
 Node* sec = new Node(20);
 Node* third = new Node(30);
 Node* fourth = new Node(40);
 Node* fifth = new Node(50);
 
 first->next = sec;
 sec->next = third;
 third->next = fourth;
 fourth->next = fifth;
 fifth->next = NULL;
 
 cout<<"printing linked list elements: "<<endl;
 print(first);
 return 0;
}