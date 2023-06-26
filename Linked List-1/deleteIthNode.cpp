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


Node* deleteNode(Node*head, int i){
    int count = 0;
    Node *temp = head;
    //Corner Case
    if(i==0){
        if(head == NULL)
        {
            return NULL;
        }
        return head -> next;
    }

    while(i){
        if(count == i - 1){
            if(temp -> next == NULL){
                return head;
            }
            temp -> next = temp -> next -> next;
            return head;
        }
        count++;
        temp = temp -> next;
    }
   return head;
}




int main(){
    Node *head = takeInput();
        int i;
        cin>>i;
        head = deleteNode(head, i);
        Node *temp = head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
       
        return 0;
}