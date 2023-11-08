// Approch modifying the data of LL

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

void sortZeroOneTwos(Node* &head){
  //step 1: counting the number of 0 1 and 2 in LL
  int zero=0;
  int one=0;
  int two=0;

 Node* temp =head;
  while(temp != NULL ){
    if(temp->data == 0){
      zero++;
    }else if(temp->data == 1){
      one++;
    }else{
      two++;
    }
    temp = temp->next;
  }

 // step2: putting all 0 first then 1 and then 2 in LL
 temp = head; 
    // fill 0s
    while(zero--){
      temp->data = 0;
      temp=temp->next;
    }
    //fill 1s
    while(one--){
      temp->data = 1;
      temp=temp->next;
    }
    //fill2
    while(two--){
      temp->data = 2;
      temp=temp->next;
    }
  
}


int main() {
   Node* head = NULL;
   Node* tail = NULL;
   insertHead(head,tail,1);
   insertTail(head,tail,2);
   insertTail(head,tail,2);
   insertTail(head,tail,1);
   insertTail(head,tail,0);
   insertTail(head,tail,0);
   cout<<endl<<"before: "<<endl;
   print(head);
   sortZeroOneTwos(head);
   cout<<endl<<"after: "<<endl;

   print(head);
   
   

    return 0;
}
