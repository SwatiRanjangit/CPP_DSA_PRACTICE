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

class Pair{
    public:
    Node* head;
    Node* tail;
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


Pair reverseLLBetter(Node *head) {
    if(head == NULL || head->next ==NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    
    Pair smallAns = reverseLLBetter(head->next);

    smallAns.tail -> next = head;
    head->next = NULL;
    Pair ans;
    ans.head = smallAns.head;
    ans.tail = head;
    return ans;
}

Node* reverseLL(Node* head){
  return  reverseLLBetter(head).head;
}

int main(){
    Node *head = takeInput();
     Node* head1 = reverseLL(head);
    print(head1);

    return 0;
}