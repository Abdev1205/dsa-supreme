#include <bits/stdc++.h>
using namespace std;

class Queue{
  public:
    // data members
    int frontEle;
    int rearEle;
    int *arr;
    int queueSize;

    // parameterized construtor
    Queue(int size){
      arr = new int [size];
      queueSize = size;
      frontEle = 0;
      rearEle = 0;
    }

    // data function
    void push(int data){
      if(rearEle==queueSize){
        cout<<"Queue is full"<<endl;
      }
      else{
        arr[rearEle] = data;
        rearEle++;
      }
    }

    void pop(){
      if(frontEle==rearEle){
        cout<<"Queue is empty"<<endl;
      }
      else{
        frontEle++;
      }
    }

    int getFront(){
      return arr[frontEle];
    }

    int getRear(){
      return arr[rearEle - 1];;
    }

    bool empty(){
      if(frontEle==rearEle){
        return true;
      }
      else{
        return false;
      }
    }

};

void printQueue(Queue q){
  while(!q.empty()){
    cout<<q.getFront()<<" ";
    q.pop();
  }
  cout<<endl;
}

int main() {
  Queue q(5);

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  cout<<"Pushing value in queue"<<endl;

  printQueue(q);

  cout<<"popping value in queue"<<endl;

  q.pop();
  printQueue(q);

  cout<<"Getting front value : "<<q.getFront()<<endl;

  cout<<"Getting rear value : "<<q.getRear()<<endl;


}