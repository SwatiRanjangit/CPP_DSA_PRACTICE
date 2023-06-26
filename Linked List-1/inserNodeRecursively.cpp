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

Node *insertNode(Node *head, int pos, int data){
    if(pos == 0 and head){
        Node *newNode = new Node(data);
        newNode -> next = head;
       return newNode;
    }
    //corner cases
    if(head==NULL){
        return head;
    }
    head -> next = insertNode(head->next, pos-1,data);
    return head;
}

int main(){
    Node *head = takeInput();
   int i , data;
   cin>>i>>data;
   head = insertNode(head,i,data);
     Node *temp = head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
       
        return 0;
}