#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data){
        this-> data = data;
        next = NULL;
    }
    
};


Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node * tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
              tail -> next = newNode;
              tail = tail ->next;
              //or
              // tail = newNode;
            }
        cin>>data;
    }
    return head;
}

Node *deleteNodeRec(Node *head, int pos){
   if(head == NULL){
    return NULL;
   }
   if(pos == 0 and head){
    return head -> next;
   }else if(pos == 0){
    Node *newNode = head->next;
    delete head;
    return newNode;
   }else{
    head -> next = deleteNodeRec(head->next, pos-1);
    return head;
   }
}

int main(){
    Node *head = takeInput();
   int i;
   cin>>i;
   head = deleteNodeRec(head,i);
     Node *temp = head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
       
        return 0;
}