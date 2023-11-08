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
    // cout<<endl<<"deleted"<<endl;
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

Node* sortZeroOneTwos(Node* &head){
  // create dummy Nodes
  Node* zeroHead = new Node(-1);
  Node* zeroTail = zeroHead;
  Node* oneHead = new Node(-1);
  Node* oneTail = oneHead;
  Node* twoHead = new Node(-1);
  Node* twoTail = twoHead;


  //step 2: will seperate the 0 , 1 and 2 with their dummy list
  Node* curr = head;
  while(curr != NULL){
   //current data is 0 in list
   
   if(curr->data == 0){
    //take out 0 wli node seperate from the list
     Node* temp = curr;
     curr= curr->next;
     temp->next=NULL;

     // join the 0 node to the dummy zero list
     zeroTail->next = temp;
     zeroTail = temp;
   }


   //current data is 1 in list
   else if(curr->data == 1){
    //take out 1 wli node seperate from the list
   Node* temp = curr;
   curr= curr->next;
   temp->next = NULL;
   // join the 1 node to the dummy one list
   oneTail->next = temp;
   oneTail = temp;

   }


   //current data is 1 in list
   else if(curr->data == 2){
    //take out 2 wli node seperate from the list
   Node* temp = curr;
   curr= curr->next;
   temp->next = NULL;
   // join the 2 node to the dummy two list
   twoTail->next = temp;
   twoTail = temp;
   }
  }

  // here all are sepetared 0 1 and two
  //step1: join the nodes
  // remove dummy nodes

  // modify ones list
  Node* temp = oneHead;
  oneHead = oneHead->next;
  temp->next = NULL;
  delete temp;

  //modify twos list
   temp = twoHead;
  twoHead = twoHead->next;
  temp->next = NULL;
  delete temp;


  // joining lists
  if(oneHead != NULL){
    zeroTail->next = oneHead;
    if(twoHead != NULL){
    oneTail->next = twoHead;
  }
  }else{
    if(twoHead != NULL){
      zeroTail->next = twoHead;
    }
  }

  // remove zero dummy node
   temp = zeroHead;
  zeroHead = zeroHead->next;
  temp->next = NULL;
  delete temp;

  
  //return head of modified list
  return zeroHead;
}


int main() {
   Node* head = NULL;
   Node* tail = NULL;
   insertHead(head,tail,0);
   insertTail(head,tail,2);
   insertTail(head,tail,2);
   insertTail(head,tail,0);
   insertTail(head,tail,0);
   insertTail(head,tail,0);
   cout<<endl<<"before: "<<endl;
   print(head);

   head = sortZeroOneTwos(head);
   cout<<endl<<"after: "<<endl;

   print(head);
   

   

    return 0;
}
