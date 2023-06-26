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

Node* evenAfterOdd(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* evenHead = nullptr;
    Node* evenTail = nullptr;
    Node* oddHead = nullptr;
    Node* oddTail = nullptr;

    Node* current = head;

    while (current != nullptr) {
        if (current->data % 2 == 0) {  // Even number
            if (evenHead == nullptr) {
                evenHead = current;
                evenTail = current;
            } else {
                evenTail->next = current;
                evenTail = evenTail->next;
            }
        } else {  // Odd number
            if (oddHead == nullptr) {
                oddHead = current;
                oddTail = current;
            } else {
                oddTail->next = current;
                oddTail = oddTail->next;
            }
        }

        current = current->next;
    }

    if (oddHead == nullptr) {
        return evenHead;
    }

    oddTail->next = evenHead;

    if (evenTail != nullptr) {
        evenTail->next = nullptr;
    }

    return oddHead;
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
   Node* newHead = evenAfterOdd(head);
   print(newHead);
   
   // Clean up the memory
   while(newHead != NULL){
    Node* temp = newHead;
    newHead = newHead->next;
    delete temp;
   }

   return 0;
}