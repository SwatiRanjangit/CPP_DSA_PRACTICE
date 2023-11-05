// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int data){
        this->data = data;
        prev=NULL;
        next = NULL;
    }
};

int getLen(Node* &head){
    Node* temp = head;
    int len=0;
    while(temp != NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail, int data){
    // if the list is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail=newNode;
        return;
    }
    
    // if the list is not empty so to add at head
    //step1: create new node
     Node* newNode = new Node(data);
     //step2: point newNode to head node
     newNode->next = head;
     //step3: point head prv to newNode
     head->prev = newNode;
     //step4: now newNode become head 
     head = newNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main() {
   Node* first = new Node(10);
    Node* sec = new Node(20);
     Node* third = new Node(30);
      Node* fourth = new Node(40);
      Node* head = first;
      Node* tail = fourth;
      
      first->next = sec;
      sec->prev=first;
      sec->next = third;
      third->prev=sec;
      third->next = fourth;
      fourth->prev = third;
      fourth->next = NULL;
      
      
     
      print(first);
      cout<<endl;
       insertAtHead(head,tail,101);
       cout<<"after inserting at head: "<<endl;
       print(head);
      

    return 0;
}