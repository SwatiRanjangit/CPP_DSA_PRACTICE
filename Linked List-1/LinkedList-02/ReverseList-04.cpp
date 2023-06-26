#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }

};

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

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
            }
        cin>>data;
    }
    return head;
}
    


Node *reverseLL(Node *head) {
    if(head == NULL || head->next ==NULL){
        return head;
    }

    Node *forward = NULL;
    Node *curr = head;
    Node* prev = NULL;
    while(curr){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;

}

int main(){
    Node *head = takeInput();
    head = reverseLL(head);
    print(head);

    return 0;
}