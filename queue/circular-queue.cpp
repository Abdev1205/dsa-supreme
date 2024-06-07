#include <iostream>
using namespace std;

class CirQueue{
  public:
    int front;
    int rear;
    int *arr;
    int size;

    CirQueue(int size){
      arr = new int[size];
      front =0;
      rear = 0;
      size = size;
    }

    // push data 

    void push(int data){
      // this condition to be folowed before adding the data into the queue
      // 1. queue is full
      // 2. single element case that is firtst element case
      // 3. circular nature
      // 4. normal flow

      if((front ==0 && rear==size-1) || (rear== front-1)){
        cout<<"Queue is full"<<endl;
        return;
      }
      else if(front==-1){
        front = 0;
        rear = 0;
        arr[rear] = data;
      }
      else if(rear==size-1 && front!=0){
        rear = 0;
        arr[rear] = data;
      }
      else{
        rear++;
        arr[rear] = data;
      }
    }
};

// void printQueue(CirQueue q){
//   while(!q.empty()){
//     cout<<q.getFront()<<" ";
//     q.pop();
//   }
//   cout<<endl;
// }

int main() {
  CirQueue q(5);
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  // printQueue(q);
  return 0;
}