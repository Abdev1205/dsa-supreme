// we can create our new custome stack 
// 1 -> using the array 
// 2 -> using the linked list

// here we are trying to make stack using the array

#include <bits/stdc++.h>
using namespace std;

class Stack{
  public:
    // data members
    int topValue; // used to store the top value
    int *arr; // this will be the pointer to the stack 
    int stackSize; // this will be the size of the stack 

    // creating a parameterized constructor to intialize the stack of that size
    Stack(int stackSize){
      arr = new int[stackSize];
      this->stackSize = stackSize;
      topValue = -1;
    }

    // data methods

    // push() method to push the value in stack 
    void push(int value){
      if(stackSize - topValue > 1){
        // it have space to add the element in the stack 
        topValue++;
        arr[topValue]=value;
      }
      else {
        cout << "Stack Overflow" << endl;
      }
    }

    // pop() method to pop the value from the stack
    void pop(){
      if(topValue == -1){
        cout<<"stack underflow empty we can not pop";
      }
      else {
        topValue--;
      }
    }

    // size() methd to get the size of the stack 
    int size(){
      return topValue+1;
    }

    // top() method to get the top value of the stack 
    int top(){
      return arr[topValue];
    }

    // empty() return that the stack is empty or not

    bool empty(){
      if(topValue==-1){
        return true;
      }
      return false;
    }
};

int main(){

  // creating a object of the stack
  Stack s(10);
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  cout<<"Printing the stack before the pop method and it size is :"<<s.size()<<endl;

  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  cout<<endl;
  s.pop();
  cout<<"Printing the stack after the pop method and it size is :"<<s.size()<<endl;

  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }

  return 0;
}