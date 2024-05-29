#include <iostream>
#include <queue>
using namespace std;

int main() {
  // creation 
  queue<int> q;

  // pushing some data in queue
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  
  // getting the size of the queue
  cout<<"Size of the queue is  "<<q.size()<<endl;

  // cheking that que is empty or not 
  if(q.empty()){
    cout<<"queue is empty"<<endl;
  }
  else{
    cout<<"queue is not empty"<<endl;
  }

  // getting the front element of the queue
  cout<<"Front element of the queue is  "<<q.front()<<endl;

  // printing the value of the queue
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }
  cout<<endl;


}