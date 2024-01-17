#include<iostream>
#include<map>
using namespace std;

class Node{
   public:
   int data;
   Node* next;

   Node(int data){
    this->data = data;
    next=NULL;
   }

};


void insertAtHead(Node* &head, Node* &tail, int data){
 if(head == NULL){
 Node* newNode = new Node(data);
 newNode->next = head;
 head=newNode;
 tail=newNode;
 return;
 }

 Node* newNode = new Node(data);
 newNode->next = head;
 head=newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data){
 if(head==NULL){
  Node* newNode = new Node(data);
    head = newNode;
    tail= newNode;
 return;
 }

 Node* newNode = new Node(data);
 tail->next = newNode;
 tail=newNode;
}

int findlength(Node* head){
    int len=0;
    while(head != NULL){
    len++;
    head=head->next;
    }
    return len;
}

void insertAtPos(Node* head, Node* tail,int data, int pos){
   if(head==NULL){
     Node* newNode = new Node(data);
     head->next=newNode;
     head=newNode;
     return;
   }

   if(pos == 0){
    insertAtHead(head,tail,data);
   }

   int len = findlength(head);

   if(pos >= len){
    insertAtTail(head,tail,data);

   }


   int i=1;
   Node* prev = head;

   while(i<pos){
    prev = prev->next;
    i++;
   }

   Node* cur = prev->next;
   Node* newNode = new Node(data);
   newNode->next = cur;
   prev->next = newNode;

}





Node* findMid(Node* &head){
   if(head == NULL) {
    cout<<"ll empty"<<endl;
    return head;

   }

   if(head->next == NULL){
     return head;
   }
   Node* slow = head;
   Node* fast = head;

   while(slow != NULL && fast != NULL){
       fast = fast->next;
       if(fast !=NULL){
            fast = fast->next;
            slow = slow->next;
       }
   }

   return slow;

}


Node* detectCycle(Node* head){
    if(head == NULL) return head;

    
    Node* slow=head;
        Node* fast=head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){

            return slow;
        } 
    }

    return NULL;
}


Node* getFirstPointOfCycle(Node* head){
  if(head == NULL) return head;

  Node* intersection = detectCycle(head);

  Node* slow = head;
  while(slow != intersection){
    slow = slow->next;
    intersection = intersection->next;

  }

  return slow;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtPos(head, tail, 101,1);
     cout<<"before delete: "<<endl;
     print(head);

     tail->next = head->next;
     if(detectCycle(head)){
        cout<<endl<<"cycle is preeent"<<endl;
     }else{
        cout<<endl<<"cycle is not present"<<endl;
     }
     
     cout<<"cycle presenting strating point is: "<<getFirstPointOfCycle(head)->data<<endl;
    //  cout<<endl<<"after delete: "<<endl;
    //  deleteNode(head,tail,5);
    //  print(head);

    // cout<<endl<<"mid elemnt: "<<findMid(head)->data<<endl;

    // Node* prev= NULL;
    // Node* cur = head;
    
    // head= reverse(prev,cur);

    // cout<<"after reverse: "<<endl;
    // print(head);
 
}


