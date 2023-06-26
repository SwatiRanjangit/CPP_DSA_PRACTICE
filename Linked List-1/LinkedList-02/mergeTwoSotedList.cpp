#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next=NULL;
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

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node *mergetwoLinkedList(Node* head1, Node* head2){
    //Corner Case
    if(head1==NULL){return head1;}
    if(head2==NULL){return head2;}

    Node *merge_head = NULL;
    Node *merge_tail = NULL;

    while(head1 and head2){
         if((head1 -> data) < (head2->data)){
            if(merge_head == NULL){
                merge_head = head1;
                merge_tail = head1;
            }else{
                merge_tail -> next = head1;  
                merge_tail = head1;       
            }
            head1 = head1 -> next;
         }else{
            if(merge_head == NULL){
                merge_head = head2;
                merge_tail = head2;
            }else{
                merge_tail -> next = head2;
                merge_tail = head2;
            }
            head2 = head2->next;
         }
        }

         if(head1){
            merge_tail ->next = head1;

         }
         if(head2){
            merge_tail ->next = head2;
         }
    return merge_head;
}

int main(){
    Node* head1 = takeInput();
    Node* head2 = takeInput();
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    Node* head = mergetwoLinkedList(head1, head2);
    print(head);

    return 0;

}