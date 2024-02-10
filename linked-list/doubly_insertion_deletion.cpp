#include <iostream>
using namespace std;

class Node {
public:
  Node *prev;
  Node *next;
  int data;

  Node() {
    this->data = 0;
    this->prev = NULL;
    this->next = NULL;
  }

  Node(int data) {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
  ~Node() { cout << "Deleting this: " << this->data << endl; }
};

void print(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int getLength(Node *head) {
  int len = 0;
  while (head != NULL) {
    head = head->next;
    len++;
  }
  cout << "length of ll: " << len << endl;
  return len;
}

void insertAtHead(Node *&head, Node *&tail, int data) {
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }

  // step 1 : Creata a new node
  Node *newNode = new Node(data);

  // step 2.
  newNode->next = head;
  // step 3
  head->prev = newNode;
  // step 4.
  head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data) {
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }

  // step 1 : Create a new node
  Node *newNode = new Node(data);
  // getting length
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}

void insertAtPostion(Node *&head, Node *&tail, int position, int data) {
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }

  // checking of first node
  if (position == 0) {
    insertAtHead(head, tail, data);
    return;
  }
  // checking for last node
  int len = getLength(head);
  if (position >= len) {
    insertAtTail(head, tail, data);
    return;
  }
  // now we have to insert into middle
  Node *newNode = new Node(data);
  int i = 1;
  Node *prev = head;
  while (i < position) {
    prev = prev->next;
    i++;
  }
  Node *curNode = prev->next;
  newNode->next = curNode;
  prev->next = newNode;
}

void deleteNode(Node *&head, Node *&tail, int position) {
  if (head == NULL) {
    cout << "we can not delete LL because it is empty" << endl;
  }
  // if position is 0 then we have to delete first node
  if (position == 0) {
    Node *temp = head;
    // head ka  head ka next ka value de diya
    head = head->next;
    // head ke prev ko null lar diya
    head->prev = NULL;
    // temp ke next ke null kar diya
    temp->next = NULL;
    // ab temp ek independent enitty hai isliye hum delete kar denge
    delete temp;
    return;
  }

  // checking for last node
  int len = getLength(head);
  if (position == len) {
    Node *temp = tail;
    // tail ko tail ka prev set kar diya
    tail = tail->prev;
    // temp ke prev ko null de deiya
    temp->prev = NULL;
    // tail ke next ko null set kar diya
    tail->next = NULL;
    // bichar temp akela ho gay is liye hum use jadh se ukhad fekenge
    delete temp;
    return;
  }
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  Node *first = new Node(12);
  Node *second = new Node(98);
  first->next = second;
  second->prev = first;
  head = first;
  tail = second;
  insertAtHead(head, tail, 23);
  insertAtHead(head, tail, 39);
  // insertAtTail(head, tail, 82);
  insertAtPostion(head, tail, 2, 61);
  deleteNode(head, tail, 0);
  print(head);
}