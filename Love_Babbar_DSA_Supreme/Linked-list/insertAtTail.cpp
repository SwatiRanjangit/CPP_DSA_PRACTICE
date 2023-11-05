
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

void insertAtHead(Node* &head,Node* &tail, int data){
    // if head == Null means LL is empty
      if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail= newNode;
        return;
    }
    
    // step 1: Create Node
    Node* newNode = new Node(data);
    // point newNode to head to join it in the LL
    newNode->next = head;
    // now change the head pointer to newNode.
    head = newNode;
}

void insertAtTail(Node*head ,Node* &tail, int data){
     // if head == Null means LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail= newNode;
        return;
    }
     // step 1: Create Node
    Node* newNode = new Node(data);
    //  tail ki next to newNode to join it in the LL
        tail->next = newNode;
        //now tail = newNode
        tail= newNode;
}
int main() {
//  Node* head = new Node(10);
 Node* head = NULL;
 Node* tail = NULL;
 insertAtHead(head,tail,20);
 insertAtHead(head,tail,30);
 insertAtHead(head,tail,40);
 insertAtHead(head,tail,50);
 insertAtTail(head,tail,80);
 
 cout<<"printing linked list elements: "<<endl;
 print(head);
 return 0;
}