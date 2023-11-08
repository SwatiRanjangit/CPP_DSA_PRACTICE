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

Node* reverse(Node* head){
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

bool checkPallindrom(Node* &head){
  if(head == NULL){
    cout<<"LL is empty"<<endl;
    return false;
  }
  // if only one node is there
  if(head->next == NULL){
    return true;
  }

  // if list has more elements
  //step 1: find middle
  Node* fast = head;
  Node* slow = head;

  while(fast != NULL){
    fast = fast->next;
    if(fast != NULL){
      fast = fast->next;
      slow=slow->next;
    }
  }

  // slow pointer is pointing to the middle node after the above loop

  //step 2: reverse the ll elements after the middle node.
  Node* reverseLLHead = reverse(slow->next);

  //step3: put the reversed ll to the next of the middle node

  slow->next = reverseLLHead;

  //step4: start comparision
  Node* temp1=head;
  Node* temp2 = reverseLLHead;
  while(temp2 != NULL){
    if(temp1->data != temp2->data){
      return false;
    }else{
      // if the data is same then move forward
      temp1=temp1->next;
      temp2 = temp2->next;
      
    }
  }
  return true;

}

int main() {
   Node* head = NULL;
   Node* tail = NULL;
   insertHead(head,tail,10);
   insertTail(head,tail,20);
   insertTail(head,tail,30);
   insertTail(head,tail,20);
   insertTail(head,tail,50);
   print(head);

   bool isPallindrom = checkPallindrom(head);
   if(isPallindrom){
    cout<<endl<<"LL is pallindrom"<<endl;
   }else{
    cout<<endl<<"LL is not pallindrom"<<endl;
   }

    return 0;
}
