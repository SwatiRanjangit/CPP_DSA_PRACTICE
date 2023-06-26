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

int findLength(Node *head){
    int  count=0;
    while(head){
        count++;
        head = head ->next;
        
    }
    return count;

}

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    Node *head = takeInput();
        print(head);
        int length = findLength(head);
        cout<<endl<<"legth of linked list is: "<<length;
        return 0;
}