#include<iostream>
using namespace std;

class Node{
   public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

Node* takeInput(){
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data != -1){
        Node* newNode = new Node(data);
        if(head == NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

Node* bubbleSort(Node* head) {
    // Base case: If the list is empty or has only one element, it is already sorted
    if (head == nullptr || head->next == nullptr)
        return head;

    Node* current = head;
    Node* nextNode = head->next;
    Node* prevNode = nullptr;

    bool swapped = false;

    while (nextNode != nullptr) {
        if (current->data > nextNode->data) {
            // Swap the nodes
            if (prevNode == nullptr) {
                // Swapping the first two nodes
                current->next = nextNode->next;
                nextNode->next = current;
                head = nextNode;
            } else {
                prevNode->next = nextNode;
                current->next = nextNode->next;
                nextNode->next = current;
            }

            swapped = true;
        }

        prevNode = current;
        current = nextNode;
        nextNode = nextNode->next;
    }

    if (swapped) {
        // Recursively sort the remaining list
        Node* sortedTail = bubbleSort(head->next);
        current->next = sortedTail;
        return head;
    } else {
        // List is already sorted
        return head;
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node* head = takeInput();
    head=bubbleSort(head);
    print(head);

    return 0;
}