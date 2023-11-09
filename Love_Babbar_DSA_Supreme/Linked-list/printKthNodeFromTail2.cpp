// Iterative approch

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

int  len(Node* &head){
   Node* temp = head;
   int count =0;
   while(temp != NULL){
     count++;
     temp = temp->next;
   } 
   return count;

}
int getNodeFromLatKthPos(Node* &head, int pos){
  int lengthOfList = len(head);
  int position = lengthOfList - pos - 1; // Adjust the position to get the correct node
  int i = 0;
  while (i != position && head != nullptr) {
    head = head->next;
    i++;
  }
  return head != nullptr ? head->data : -1; // Return the data of the node or handle empty list case
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