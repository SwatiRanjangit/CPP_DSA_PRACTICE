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

void printIthNode(Node *head,int i){
    int count =0;
    if(head == NULL){
        return;
    }
    while(head){
        if(count == i){
            cout<<"data at ith node is: "<<head->data<<endl;
            return;
        }
        count++;
        head = head ->next;
    }
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
        cout<<endl;
        printIthNode(head, 2);
        return 0;
}