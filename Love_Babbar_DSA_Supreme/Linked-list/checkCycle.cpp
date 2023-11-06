#include <iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void print(Node* head){
    if (head == NULL) {
        cout << "Empty list" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);
}

// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
        
//     }
// }

void insertHead(Node* &head,Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        newNode->next = head;
        return;
    }
     Node* newNode = new Node(data);
     newNode->next = head;
     head = newNode;
     tail->next = head;
 }
 
 void insertTail(Node* &head,Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail=newNode;
        newNode->next = head;
        return;
    }
     Node* newNode = new Node(data);
     tail->next = newNode;
     tail = newNode;
     tail->next = head;
 }
 
 
// bool checkCircular(Node* &head, Node* &tail) {
//     if (head == NULL)
//         return false;

//     Node* slow = head;
//     Node* fast = head;

//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;

//         if (slow == fast) {
//             // The linked list contains a cycle
//             return true;
//         }
//     }
//     // No cycle found
//     return false;
// }

bool checkCircular(Node* &head){
   if(head == NULL){
       cout<<"List is empty"<<endl;
       return false;
     }
     
     map<Node*,bool> visited;
     Node* temp = head;
     while(temp != NULL){
         if(visited.find(temp) != visited.end()){
             // means that cycle is present
             return true;
         }
         visited[temp] = true;
         temp - temp->next;
     }
     return false;
}
 
 

int main() {
   Node* head = NULL;
   Node* tail = NULL;
   insertHead(head,tail,10);
   insertHead(head,tail,20);
   insertTail(head,tail,30);
   insertTail(head,tail,40);
   insertTail(head,tail,50);
   print(head);
   
    if (checkCircular(head)) {
        cout <<endl<< "The linked list contains a cycle." << endl;
    } else {
        cout <<endl<< "The linked list does not contain a cycle." << endl;
    }

    return 0;
}