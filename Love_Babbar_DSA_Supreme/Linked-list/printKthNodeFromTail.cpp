// RECURSION APPROACH

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
  ~Node(){}
};

void insertAtHead(Node* &head,Node* &tail,int data){
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


void insertAtTail(Node* &head,Node* &tail,int data){
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

void print(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

void fun(Node* head,int& pos, int& ans){
 
  if(head == NULL){
    return;
  }

  fun(head->next, pos,ans);

  if(pos == 0){
    ans = head->data;
  }
  pos--;
}

int getNodeFromLatKthPos(Node* head, int pos){
  int ans =-1;
  fun(head,pos,ans);
  return ans;
}

int main() {
  Node* head = NULL;
  Node* tail=NULL;
  insertAtHead(head,tail,10);
  insertAtTail(head,tail,20);
  insertAtTail(head,tail,30);
  insertAtTail(head,tail,40);
  insertAtTail(head,tail,50);
  print(head);
  cout<<endl<<"kth node from tail is: "<<endl;
  int ans = getNodeFromLatKthPos(head,2);
  cout<<ans<<endl;

  return 0;
}