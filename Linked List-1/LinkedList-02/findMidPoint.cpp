#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next = NULL;
    }

};

int findMidPoint(Node *head){
    if(head == NULL or head->next == NULL){
        return -1;
    }
    Node *slow = head;
    Node *fast = head->next;

  while(fast and fast->next !=NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow->data;
}

Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1){
      Node *newNode = new Node(data);
      if(head ==NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail-> next = newNode;
        tail = tail->next;
    }
    cin>>data;
   }
   return head;
}

int main(){
    Node *head = takeInput();
    Node *temp = head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
    cout<<findMidPoint(head);
    return 0;
}