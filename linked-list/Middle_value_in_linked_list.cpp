// here we have to find middle elements of the Linked list
// we can also use loop but for better performance
// we will use slow fast approach

#include <iostream>
using namespace std;

class Node {
public:
  Node *next;
  int data;

  Node() {
    this->data = 0;
    this->next = NULL;
  }

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  ~Node() { cout << "Deleting this node..." << this->data << endl; }
};

void print(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
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

void findMiddle(Node *&slow, Node *&fast) {
  if (fast == NULL || fast->next == NULL) {
    return;
  }

  // here we will apply the slow fast appriach
  // fast will move to every 2 node
  Node *temp = fast->next;
  fast = temp->next;

  // slow will move to every single node
  slow = slow->next;

  // recusively calling a find middle function
  findMiddle(slow, fast);
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
  print(head);
  cout << endl;
  Node *slow = head;
  Node *fast = head->next;
  findMiddle(slow, fast);
  cout << "Middle value of linked list is :" << slow->data << endl;
}