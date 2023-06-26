#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next =NULL;

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



Node *appendLastNToFirst(Node *head, int n){
    if(n==0 or head == NULL){
        return head;
    }
    Node *tail = head;
    Node *ptr = head;
    int length = 1;

    while(tail -> next){
        tail = tail -> next;
        length++;
    }
    int counter =1;
    while(counter < length - n){
        ptr = ptr->next;
        counter++;
    }

    // to append 
    tail -> next = head;
    head = ptr->next;
    ptr -> next = NULL;

    return head;


}

int main(){

    Node *head = takeInput();
    int pos;
    cin>>pos;
    head = appendLastNToFirst(head, pos);
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    return 0;

}