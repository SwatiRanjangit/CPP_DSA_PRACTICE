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

int FindNode(Node* head, int data, int count = 0) {
    if (head == NULL)
        return -1;

    if (head->data == data)
        return count;

    return FindNode(head->next, data, count + 1);
}

int main() {
    Node* head = takeInput();
    int data;
    cout << "Enter data to be searched: ";
    cin >> data;

    int position = FindNode(head, data);
    if (position == -1)
        cout << "Node not found";
    else
        cout << "Node found at position: " << position;

    return 0;
}
