// linked list is collection of nodes in any manner (not continoous)
// linked list is similar to array but here are using pointer instead of indices
// to opreation here no wastage of memory because nodes can be connected by
// pointers here node is single cell of single value they are many types of
// linked list
// 1. Singly linked list :- here it have one direaction and its ends with null
// pointer value
// 2. circular Singly linked list :- it is same as singly but its last node is
// conneted to first node of list
// 3. Doubly Linked List :- It have two direction so each node consist of data\
// 4. circular Doubly Linked List :- It have two direction so each node consist
// of data same as Doubly linked list

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
};

void printLinkedList(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main() {
  // basic way to create a linked list
  Node *first = new Node(10);
  Node *second = new Node(20);
  Node *third = new Node(30);
  Node *fourth = new Node(40);
  Node *fifth = new Node(50);

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  cout << "Single LinkedList : \n";
  printLinkedList(first);
}