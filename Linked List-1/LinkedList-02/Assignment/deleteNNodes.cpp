#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* takeInput() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;

    while (data != -1) {
        Node* newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = tail->next;
        }

        cin >> data;
    }

    return head;
}

Node* deleteNodes(Node* head, int M, int N){
    if(M ==0 ){
        return NULL;
    }
    Node* current = head;
    Node* prev = NULL;

    while(current){
        //Traverse M nodes
        for(int i =0; i<M && current != NULL; i++){
            prev = current;
            current = current->next;
        }

        // Deleting N nodes
        for(int i=0; i<N && current != NULL; i++){
            Node* temp = current;
            current = current->next;
            delete temp;
    }

    // Connect the previous node to the next node after deletion
    prev->next = current;
}
return head;
}


void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
   Node* head = takeInput();
   int M,N;
   cin>>M>>N;
   head= deleteNodes(head,M,N);
   print(head);


   return 0;
}