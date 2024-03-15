// what is stack 
// -> Stack is data structure which follows LIFO 

// creation of stack 
// -> we can create a stack by using STl libraby by importing 
// #include<stack> and we can also create a new stack that will be custom stack

#include<bits/stdc++.h>
using namespace std;

int main(){
  // created and initialized a stack 
  stack<int> s;
  
  // add value to stack using push method
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(6);
  s.push(8);

  // we can remove any value from the to using pop method
  s.pop();

  // we can print the top value of stack by using top() method
  cout<<s.top()<<endl;

  // we can also check size of a stack by using size method

  cout<<s.size()<<endl;

  cout<<s.empty()<<endl;

  cout<<" Prinitng stack data : "<<endl;
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }

  return 0;
}