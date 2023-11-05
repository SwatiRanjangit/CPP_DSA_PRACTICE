
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
int findLength(Node* &head){
    Node* temp = head;
    int len =0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos){
    // if LL is empty case:
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail= newNode;
        return;
    }
    
    // if position = head means at start
    if(pos == 0){
       insertAtHead(head,tail,data); 
       return;
    }
  
  
  // if postion is equal to last means at tail
  int len = findLength(head);
  if(pos >= len){
      insertAtTail(head,tail,data);
      return;
  }
    // find position of curr and prev pointer
    int i=1;
    Node* prev = head;
    while(i<pos){
        prev = prev->next;
        i++;
    }
    Node* cur = prev->next;
    
    // step 1: create a node
      Node* newNode = new Node(data);
    // step: 2
    newNode ->next = cur;
    //step: 3
    prev->next = newNode;
    
    
}

Node* reverseKNode(Node* &head, int k){
    if(head == NULL){
        cout<<"List is empty";
        return head;
    }
    
    int len = findLength(head);
    if(k>len){
        cout<<"enter a valid Linked list"<<endl;
        return head;
    }
    
    // number of nodes is greater less than or eqL k
    Node* prev = NULL;
    Node* cur = head;
    Node* forward = cur->next;
    int count =0;
    while(count <k){
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
        count++;
        
    }
    
    if(forward != NULL){
        // still have nodes to reverse
        head->next = reverseKNode(forward,k);
    }
    
    return prev;
    
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
 insertAtPosition(head, tail, 101,4);
 cout<<"printing linked list elements: "<<endl;
 print(head);
 

 cout<<endl<<"printing linked list elements after reverse in k : "<<endl;
  head = reverseKNode(head,4);
 
 print(head);
 
 

 
 
 return 0;
}