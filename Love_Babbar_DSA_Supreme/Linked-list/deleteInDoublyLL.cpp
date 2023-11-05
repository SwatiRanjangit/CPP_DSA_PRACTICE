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
    ~Node(){
        cout<<endl<<"deleted"<<endl;
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

void insertAtTail(Node* &head,Node* &tail, int data){
    // if LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    // if LL is not emptu
    //1. create node
     Node* newNode = new Node(data);
     // point to tail
     tail->next = newNode;
     // point newnode prev to tail
     newNode->prev = tail;
     //now newnode become tail
     tail=newNode;
     
}

void insertAtPos(Node* &head,Node* &tail, int data, int pos){
    // if LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    // if pos == 1st that is at head
   if(pos == 1){
       insertAtHead(head,tail,data);
       return;
   }
   
   // if pos is last
   int len = getLen(head);
   if(pos > len){
       insertAtTail(head,tail,data);
       return;
   }
   
   // if pos is something in the mid of first and last
   // step1: find previous
   int i=1;
   Node* prevNode = head;
   while(i<pos-1){
       prevNode=prevNode->next;
       i++;
   }
   //step2: find current
   Node* cur = prevNode->next;
   //step3: create node
   Node* newNode = new Node(data);
   //ste4:
   prevNode->next = newNode;
   newNode->prev=prevNode;
   cur->prev = newNode;
   newNode->next=cur;
   
}

void deleteAtPos(Node* &head,Node* &tail, int pos){
    if(head==NULL){
        cout<<"List is empty"<<endl;
    }
    // if LL is empty
    int len= getLen(head);
    if(pos > len){
        cout<<endl<<"can't delete cz there is no such position exists";
        return;
    }
    
    // if single node is there
    if(head->next==NULL){
        Node* temp = head;
        head  =NULL;
        delete temp;
        return;
    }
    
    // delete head node
    if(pos == 1){
        Node* temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
    return;
    }
    
    // delete tail node
    
    if(pos == len){
        Node* temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next=NULL;
        delete temp;
        return;
    }
    
    // delete middle any position
    
    int i=1;
    Node* left = head;
    // find pos of left pointer
    while(i<pos-1){
       left = left->next;
       i++;
    }
    //position of current pointer
    Node* cur = left->next;
    //position of rigt pointer
    Node* right = cur->next;
    //step1
    left->next = right;
    //step2
    right->prev = left;
    //step3
    cur->next = NULL;
    //step4
    cur->prev = NULL;
    delete cur;
    
    
    
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
    //   insertAtHead(head,tail,101);
    //   cout<<"after inserting at head: "<<endl;
    //   print(head);
    
    //   insertAtTail(head,tail,101);
    //   cout<<"after inserting at tail: "<<endl;
    //   print(head);
       
       insertAtPos(head,tail,103,4);
       cout<<"after inserting: "<<endl;
       print(head);
       
       // after deleting
       deleteAtPos(head,tail,6);
       cout<<endl<<"after deleting node: "<<endl;
       print(head);
       
      

    return 0;
}