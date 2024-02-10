
// insertion is easier and less costier as compared to array
// we can insert new node in right and left
// for inserting we have to follow the steps
// 1-> create a new node and give argument data
// 2-> add newnode->next=head
// 3-> add head= newnode

#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node() {
    this->data = 0;
    this->next = NULL;
  }

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  ~Node() { cout << "deleting this node :" << this->data << endl; }
};

void print(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

void insertAtHead(Node *&head, Node *&tail, int data) {
  // adding extra check for Null value
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }

  // step 1 --> create a new node
  Node *newNode = new Node(data);
  // step 2 --> update newnode next pointer
  newNode->next = head;
  // step 3 --> update head value
  head = newNode;
}
void insertAtTail(Node *&head, Node *&tail, int data) {
  // adding extra check for Null value
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  // step 1 --> create a new node
  Node *newNode = new Node(data);
  // step 2 --> update tail next pointer
  tail->next = newNode;
  // step 3 --> update newnode value
  tail = newNode;
}

int findLinkedListLength(Node *head) {
  Node *temp = head;
  int len = 0;
  while (temp != NULL) {
    temp = temp->next;
    len++;
  }
  return len;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int postion) {
  // adding extra check for Null value
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  if (postion == 0) {
    insertAtHead(head, tail, data);
    return;
  }
  int len = findLinkedListLength(head);
  cout << "len of linked list: " << len << endl;
  if (postion >= len) {
    insertAtTail(head, tail, data);
    return;
  }

  // create prev and curr pointers
  int i = 1;
  Node *prev = head;
  while (i < postion) {
    prev = prev->next;
    i++;
  }
  Node *curr = prev->next;

  // create a new node
  Node *newNode = new Node(data);

  // setting new node next to curr node
  newNode->next = curr;

  // setting prev node next to new Node
  prev->next = newNode;
}

void deleteNode(Node *&head, Node *&tail, int postion) {
  if (head == NULL) {
    cout << "cannot delete node beacuse LL is empty" << endl;
    return;
  }

  if (postion == 1) {
    // which we are deleting first element
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return;
  }
  int len = findLinkedListLength(head);
  if (postion == len) {
    // find prev
    int i = 1;
    Node *prev = head;
    while (i < postion - 1) {
      prev = prev->next;
      i++;
    }
    prev->next = NULL;
    Node *temp = tail;
    tail = prev;
    delete temp;
    return;
  }

  // deleting middle node
  int i = 1;
  // step 1 fins prev and curr
  Node *prev = head;
  while (i < postion - 1) {
    prev = prev->next;
    i++;
  }
  Node *curr = prev->next;

  // step 2
  prev->next = curr->next;
  // step 3
  curr->next = NULL;
  // step 4
  delete curr;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  insertAtHead(head, tail, 12);
  insertAtHead(head, tail, 54);
  insertAtHead(head, tail, 23);
  insertAtHead(head, tail, 87);
  // insertAtTail(head, tail, 43);
  cout << "head: " << head->data << endl;
  cout << "tail: " << tail->data << endl;
  print(head);
  cout << endl;
  // insertAtPosition(head, tail, 34, 4);
  cout << "head: " << head->data << endl;
  cout << "tail: " << tail->data << endl;
  cout << endl;
  deleteNode(head, tail, 3);
  print(head);
  cout << endl;
  cout << "head: " << head->data << endl;
  cout << "tail: " << tail->data << endl;
}