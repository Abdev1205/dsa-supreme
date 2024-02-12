// here we have to revese k grouped linked list

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
  ~Node() { cout << " Deleting this node..." << endl; }
};

int getLength(Node *head) {
  Node *temp = head;
  int i = 0;
  while (temp != NULL) {
    temp = temp->next;
    i++;
  }
  return i;
}

void print(Node *head) {
  Node *newNode = head;
  while (newNode != NULL) {
    cout << newNode->data << " ";
    newNode = newNode->next;
  }
  return;
}

void insertAtTail(Node *&head, Node *&tail, int data) {
  if (head == NULL) {
    Node *newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }

  Node *newNode = new Node(data);
  tail->next = newNode;
  tail = newNode;
  return;
}

Node *reverseKGroup(Node *head, int k) {
  int len = getLength(head);
  if (head == NULL) {
    return NULL;
  }

  if (k > len) {
    return head;
  }

  Node *prev = NULL;
  Node *curr = head;
  Node *forward = curr->next;
  int count = 0;

  while (count < k) {
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    count++;
  }

  if (forward != NULL) {
    head->next = reverseKGroup(forward, k);
  }

  return prev;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  insertAtTail(head, tail, 10);
  insertAtTail(head, tail, 20);
  insertAtTail(head, tail, 30);
  insertAtTail(head, tail, 40);
  insertAtTail(head, tail, 50);
  insertAtTail(head, tail, 60);
  cout << "LL before reverse: " << endl;
  print(head);
  cout << endl;
  Node *ans = reverseKGroup(head, 3);
  print(ans);
}