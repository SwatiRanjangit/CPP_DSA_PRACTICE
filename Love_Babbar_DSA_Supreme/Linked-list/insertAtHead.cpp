// Insert node at head
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

void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
int main() {
//  Node* head = new Node(10);
 Node* head = NULL;
 insertAtHead(head,20);
 insertAtHead(head,30);
 insertAtHead(head,40);
 insertAtHead(head,50);
 
 cout<<"printing linked list elements: "<<endl;
 print(head);
 return 0;
}