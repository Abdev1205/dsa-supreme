#include <iostream>
using namespace std;

void printlinkedList(Node* head){
  Node* current = head
  while (current!=nullptr)
  {
    cout<<current->value<<" ";
    current=current->next;
  }
  cout<<endl;
  
}

int main() {
  struct Node
  {
    int value;
    Node* next;
  };

  Node* head = new Node();
  head->value=1;

  Node* second = new Node();
  second->value=2;

  Node* third = new Node();
  third->value=3;

  Node* fourth = new Node();
  fourth->value=4;

  head->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=nullptr;
  printlinkedList(head);
  
}