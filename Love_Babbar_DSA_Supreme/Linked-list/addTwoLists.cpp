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


Node* reverse(Node* &head){
  Node* temp =head;
  Node* prev = NULL;
  Node* curr = head;
  Node* next = curr->next;

  while(curr != NULL){
    next = curr->next;
    curr->next = prev;
    prev=curr;
    curr=next;
  }
  return prev;
}

Node* AddTwoList(Node* &head1,Node* head2){

  // if any has no values
  if(head1 == NULL){
    return head2;
  }

  if(head2 == NULL){
    return head1;
  }
   // reveser those two lists
   head1 = reverse(head1);
   head2=reverse(head2);

   // add both lists
   Node* ansHead = NULL;
   Node* ansTail = NULL;
   int carry =0;


   while(head1 != NULL && head2 != NULL){
    //calculate sum 
    int sum = carry + head1->data + head2->data;
    int digit = sum % 10;
    carry =sum/10;

    // create new node for digit
    Node* newNode = new Node(digit);
  // attach new node to answer list
    if(ansHead == NULL){
      ansHead = newNode;
      ansTail = newNode;
    }else{
      ansTail->next = newNode;
      ansTail=newNode;
    }
    head1 = head1->next;
    head2=head2->next;
   }

  

  // when head1 list is bigger in size than other
   while(head1 != NULL){
    //calculate sum 
    int sum = carry + head1->data;
    int digit = sum % 10;
    carry =sum/10;
   
   // create new node for digit
    Node* newNode = new Node(digit);
  // attach new node to answer list
      ansTail->next = newNode;
      ansTail=newNode;
   
    head1 = head1->next;
  }


// when head2 list is bigger in size than other

  while(head2 != NULL){
    //calculate sum 
    int sum = carry + head2->data;
    int digit = sum % 10;
    carry =sum/10;
   
   // create new node for digit
    Node* newNode = new Node(digit);
  // attach new node to answer list
      ansTail->next = newNode;
      ansTail=newNode;
   
    head2 = head2->next;
  }

 // carry
 while(carry != 0){
   int sum = carry;
    int digit = sum % 10;
    carry =sum/10;
   
   // create new node for digit
    Node* newNode = new Node(digit);
    ansTail->next = newNode;
    ansTail=newNode;

 }

   //reverse the ans list
   ansHead = reverse(ansHead);
   return ansHead;
}


int main() {
   Node* head1 = NULL;
   Node* tail1 = NULL;
   insertHead(head1,tail1,3);
   insertTail(head1,tail1,2);
   insertTail(head1,tail1,1);
   cout<<endl<<"first list: "<<endl;
   print(head1);

   Node* head2 = NULL;
   Node* tail2 = NULL;
   insertTail(head2,tail2,9);
   insertTail(head2,tail2,4);
   insertTail(head2,tail2,2);
   cout<<endl<<"second list: "<<endl;
   print(head2);
  
  
  cout<<endl<<"after addition"<<endl;
  Node* ans = AddTwoList(head1,head2);
  print(ans);

    return 0;
}
