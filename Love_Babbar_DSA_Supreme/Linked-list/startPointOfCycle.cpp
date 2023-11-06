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


Node* startPointOfCycle(Node* head){
    if(head == NULL){
        cout<<"List is empty "<<endl;
        return head;
    }
    
    Node* fast = head;
    Node* slow= head;
    // Node* temp = head;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow=slow->next;
        }
        if(slow == fast){
            slow = head;
            break;
        }
    }
    while(slow != fast){
        slow=slow->next;
        fast = fast->next;
    }
    return slow;
}


int main() {
   Node* first = new Node(10);
   Node* sec = new Node(20);
   Node* third = new Node(30);
   Node* fourth = new Node(40);
   Node* fifth = new Node(50);
   Node* six = new Node(60);
   Node* seven = new Node(70);
   
   
   first->next = sec;
   sec->next = third;
   third->next = fourth;
   fourth->next = fifth;
   fifth->next = six;
   six->next = seven;
   seven->next=six;
   
   Node* res = startPointOfCycle(first);
   cout<<"stating point of cycle is: "<<res->data<<endl;
   
    // if (checkCircular(first)) {
    //     cout <<endl<< "The linked list contains a cycle." << endl;
    // } else {
    //     cout <<endl<< "The linked list does not contain a cycle." << endl;
    // }

    return 0;
}