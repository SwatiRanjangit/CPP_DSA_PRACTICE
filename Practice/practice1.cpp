#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

Node *takeInput() {
  int data;
  cin >> data;
  Node *head = NULL;
  Node *tail = NULL;
  while (data != -1) {
    Node *newNode = new Node(data);
    if (head == NULL) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = tail->next;
    }
    cin >> data;
  }
  return head;
}

/*
int count(Node *head) {
  int count = 0;
  if (head == NULL) {
    return -1;
  }
  while (head != NULL) {
    head = head->next;
    count++;
  }
  return count;
}
*/

/*
int printIth(Node *head, int pos) {
  int count = 0;
  if (head == NULL) {
    return -1;
  }
  while (head != NULL) {
    if (count == pos) {
      return head->data;
    }
    count++;
    head = head->next;
  }
}
*/

// print ith node recursive
int printIth(Node *head, int pos) {
  if (head == NULL) {
    return -1;
  }
  if (pos == 0) {
    return head->data;
  }
  return printIth(head->next, (pos - 1));
}

int count(Node *head) {
  if (head == NULL) {
    return 0;
  }

  return count(head->next) + 1;
}

Node *insert(Node *head, int data, int pos) {
  int count = 0;
  Node *newNode = new Node(data);
  Node *temp = head;
  if (pos == 0) {
    newNode->next = head;
    head = newNode;
    return head;
  }
  while (temp != NULL && count < pos - 1) {
    temp = temp->next;
    count++;
  }
  if (temp != NULL) {
    Node *a = temp->next;
    temp->next = newNode;
    newNode->next = a;
  }
  return head;
}

Node *insertRec(Node *head, int data, int pos) {
  if (pos == 0 and head) {
    Node *newNode = new Node(data);
    newNode->next = head;
    return head;
  }

  // Corner Case
  if (head == NULL) {
    return head;
  }

  head->next = insertRec(head->next, pos - 1, data);
  return head;
}

Node *deleteNode(Node *head, int pos) {
  int count = 0;
  Node *ptr = head;

  if (pos == 0) {
    if (head == NULL) {
      return NULL;
    }
    return head->next;
  }
  while (ptr) {
    if (count == pos - 1) {
      if (ptr->next == NULL) {
        return head;
      }
      ptr->next = ptr->next->next;
      return head;
    }
    count++;
    ptr = ptr->next;
  }
  return head;
}

Node *deleteNodeREC(Node *head, int pos) {
  if (head == NULL) {
    return NULL;
  }
  if (pos == 0 and head) {
    return head->next;
  } else if (pos == 0) {
    Node *newNode = head->next;
    delete head;
    return newNode;
  } else {
    head->next = deleteNodeREC(head->next, pos - 1);
    return head;
  }
}

int main() {
  int pos;
  cin >> pos;
  Node *head = takeInput();
  Node *head1 = deleteNodeREC(head, pos);
  // Node *head1 = insertRec(head, data, pos);
  // cout << endl << "Count :" << count(head) << endl;
  // cout << "Ith Node is ->" << printIth(head, pos) << endl;
  Node *temp = head1;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}