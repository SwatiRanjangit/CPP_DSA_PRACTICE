#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
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


int dataSearch(Node *head, int data1, int count=0){
    //corner case
    if(head == NULL){
        return -1;
    }

    // base case
    if(data1 == head ->data){
        return count;
    }
    return dataSearch(head->next, data1, count+1);



}



int main(){

    Node *head = takeInput();
    int data1;
    cin>>data1;
    cout<<"data is present at index: "<<dataSearch(head, data1);
    return 0;

}