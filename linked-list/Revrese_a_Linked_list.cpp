// here we are using recusion to reverse the linked list

#include <iostream>
using namespace std;

class Node {
public:
  Node *next;
  Node *prev;
  int data;

  Node() {
    this->data = 0;
    this->next = NULL;
    this->prev = NULL;
  }
  Node(int data) {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};

void print(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  return;
}

Node *reverse(Node *&prev, Node *&curr) {
  // base case
  if (curr == NULL) {
    return prev;
  }
  Node *forward = curr->next;
  curr->next = prev;
  return reverse(curr, forward);
}

void insertAtTail(Node *&head, Node *&tail, int data) {
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

int main() {
  Node *head = NULL;
  Node *tail = NULL;

  insertAtTail(head, tail, 10);
  insertAtTail(head, tail, 20);
  insertAtTail(head, tail, 30);
  insertAtTail(head, tail, 40);

  Node *prev = NULL;
  Node *curr = head;
  cout << "value before sort " << endl;
  print(head);
  cout << endl;
  head = reverse(prev, curr);
  cout << "value after sort " << endl;
  print(head);
}