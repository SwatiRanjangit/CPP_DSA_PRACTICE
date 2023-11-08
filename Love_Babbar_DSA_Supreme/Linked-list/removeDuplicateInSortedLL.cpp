#include <iostream>
using namespace std;


class Node{
  public:
  int data;
  Node* next;

  Node(int data){
   this->data = data;
   next = NULL;
  }

  ~Node(){
    cout<<endl<<"deleted"<<endl;
  }
};


void insertHead(Node* &head,Node* &tail, int data){
  if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail=newNode;
    return;
  }

  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;

}


void insertTail(Node* &head,Node* &tail, int data){
  if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail=newNode;
    return;
  }

  Node* newNode = new Node(data);
  tail->next = newNode;
  tail = newNode;

}

void print(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

void removeDuplicate(Node* &head){
  if(head == NULL){
    cout<<"LL is empty"<<endl;
    return;
  }
  if(head->next==NULL){
    cout<<"LL has only one element"<<endl;
    return;
  }


  //greater than one nodes in ll
  Node* curr = head;
  while(curr != NULL){
     if((curr->next != NULL) &&(curr->data == curr->next->data)){
      Node* temp=curr->next;
      curr->next = curr->next->next;
      temp->next = NULL;
      delete temp;
      
     }else{
      curr=curr->next;
     }
  }
}
int main() {
   Node* head = NULL;
   Node* tail = NULL;
   insertHead(head,tail,10);
   insertTail(head,tail,10);
   insertTail(head,tail,30);
   insertTail(head,tail,30);
   insertTail(head,tail,40);
   insertTail(head,tail,60);
   cout<<endl<<"before removing duplicates: "<<endl;
   print(head);
   removeDuplicate(head);
   cout<<endl<<"after removing duplicates: "<<endl;
   print(head);
   
   

    return 0;
}
