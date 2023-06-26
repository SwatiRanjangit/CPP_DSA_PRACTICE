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

    Node *smallAns= reverseLL(head->next);
     Node* tail = head->next;
     tail->next = head;
     head->next = NULL;
     return smallAns;

}

int main(){
    Node *head = takeInput();
    head = reverseLL(head);
    print(head);

    return 0;
}