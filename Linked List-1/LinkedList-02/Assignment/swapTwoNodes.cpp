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

Node* swapNodes(Node* head, int i, int j){
    //Base case:
    if(head == NULL || head->next == NULL || i==j){
        return head;
    }
    // Initialize pointers to track the nodes to be swapped
    Node* prev1 = NULL;
    Node* curr1 = head;
    Node* prev2 = NULL;
    Node* curr2 = head;

    // Traverse the linked list to find the nodes at positions 'i' and 'j'
    int pos=0;
    while(curr1 != NULL && pos != i){
        prev1 = curr1;
        curr1 = curr1 -> next;
        pos++;
    }

     pos = 0;
     while(curr2 != NULL && pos != j){
        prev2=curr2;
        curr2 = curr2->next;
        pos++;
     }

      // If either 'i' or 'j' is out of range, no swapping is required
      if(curr1 == NULL || curr2 == NULL){
        return head;
      }
      // Swap the nodes by updating the pointers
      if(prev1 != NULL){
        prev1->next = curr2;
      }else{
        head = curr2;
      }

      if(prev2 != NULL){
        prev2->next = curr1;

      }else{
        head = curr1;
      }

      Node* temp = curr2->next;
      curr2->next=curr1->next;
      curr1->next=temp;

      return head;


}
void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main(){
    Node* head = takeInput();
    int i,j;
    cin>>i>>j;
    head = swapNodes(head,i,j);
    print(head);

    return 0;
    
}