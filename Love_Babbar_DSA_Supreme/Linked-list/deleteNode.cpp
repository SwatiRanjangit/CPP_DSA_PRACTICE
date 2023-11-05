
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
    // destructor to delete node
    ~Node(){
        cout<<endl<<"delted"<<endl;
    }
};

void print(Node* head){
    
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void insertAtHead(Node* &head,Node* &tail, int data){
    // if head == Null means LL is empty
      if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail= newNode;
        return;
    }
    
    // step 1: Create Node
    Node* newNode = new Node(data);
    // point newNode to head to join it in the LL
    newNode->next = head;
    // now change the head pointer to newNode.
    head = newNode;
}

void insertAtTail(Node*head ,Node* &tail, int data){
     // if head == Null means LL is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail= newNode;
        return;
    }
     // step 1: Create Node
    Node* newNode = new Node(data);
    //  tail ki next to newNode to join it in the LL
        tail->next = newNode;
        //now tail = newNode
        tail= newNode;
}
int findLength(Node* &head){
    Node* temp = head;
    int len =0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos){
    // if LL is empty case:
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail= newNode;
        return;
    }
    
    // if position = head means at start
    if(pos == 0){
       insertAtHead(head,tail,data); 
       return;
    }
  
  
  // if postion is equal to last means at tail
  int len = findLength(head);
  if(pos >= len){
      insertAtTail(head,tail,data);
      return;
  }
    // find position of curr and prev pointer
    int i=1;
    Node* prev = head;
    while(i<pos){
        prev = prev->next;
        i++;
    }
    Node* cur = prev->next;
    
    // step 1: create a node
      Node* newNode = new Node(data);
    // step: 2
    newNode ->next = cur;
    //step: 3
    prev->next = newNode;
    
    
}


void deleteNode(Node* &head, Node* &tail, int pos){
    // if pos is greater than length of ll
    int size = findLength(head);
    if(pos > size){
        
        cout<<endl<<"can't delete cz position is less than size of Linked list"<<endl;
        return;
    }
    if(head == NULL){
        cout<<"can't delete empty";
        return;
    }

    
    // case for deleting head Node
    if(pos == 1){
       Node* temp = head;
       head = head->next;
       temp->next = NULL;
       delete temp;
       return;
    }
    
    // case for deleting last Node
    int len = findLength(head);
    if(pos == len){
        //find prev
        int i=1;
        Node* prev = head;
        while(i<pos-1){
            prev = prev->next;
            i++;
        }
        // step1: prev ->next = null
        prev->next = NULL;
        //step 2: delete temp;
        Node* temp = tail;
       //step3: upadte tail
       tail = prev;
       //step4: delete temp
       delete temp;
        return;
        
    }
    
//case for deleting any  Node in the middle of first and last
// step 1: find prev
    int i=1;
    Node* prev = head;
    while(i<pos-1){
       prev= prev->next;
       i++;
    }
    

    // find curr
    Node* cur = prev->next;
    //step1: prev ke next ko cur ke next se jod do
    prev->next = cur->next;
    //ste2: curr ke next ko null
    cur->next = NULL;
    //step3: delete 
    delete cur;
 
}

int main() {
//  Node* head = new Node(10);
 Node* head = NULL;
 Node* tail = NULL;
 insertAtHead(head,tail,20);
 insertAtHead(head,tail,30);
 insertAtHead(head,tail,40);
 insertAtHead(head,tail,50);
 insertAtTail(head,tail,80);
 insertAtPosition(head, tail, 101,4);
 cout<<"printing linked list elements: "<<endl;
 print(head);
 
 deleteNode(head,tail,7);
 cout<<"after deletion: "<<endl;
  print(head);
 
 return 0;
}