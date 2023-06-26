#include <iostream>

using namespace std;

// Definition for singly-linked list

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

// Helper function to reverse a sublist of the linked list
pair<Node*, Node*> reverseKNodes(Node* head, int k) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    int count = 0;
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    return make_pair(prev, head);
}

// Function to reverse the nodes of the linked list 'k' at a time
Node* reverseKGroup(Node* head, int k) {
    Node* current = head;
    int count = 0;

    // Traverse 'k' nodes to find the k+1th node
    while (current != NULL && count < k) {
        current = current->next;
        count++;
    }

    // If the remaining number of nodes is less than 'k', no need to reverse
    if (count < k)
        return head;

    // Reverse the sublist and get the new head and tail
    pair<Node*, Node*> reversed = reverseKNodes(head, k);
    Node* newHead = reversed.first;
    Node* tail = reversed.second;

    // Connect the reversed sublist to the remaining list recursively
    tail->next = reverseKGroup(current, k);

    return newHead;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
   Node* head = takeInput();
    

        int k;
        cin >> k;

        Node* newHead = reverseKGroup(head, k);
        printList(newHead);

        // Free the memory allocated for the linked list
        Node* current = newHead;
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }

        return 0;
    }



